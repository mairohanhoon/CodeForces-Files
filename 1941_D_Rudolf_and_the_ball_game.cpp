#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m, x;
        cin >> n >> m >> x;
        vector<vector<int>> res;
        vector<pair<int, char>> query(m);
        for(int i=0; i<m; i++){
            cin >> query[i].first >> query[i].second;
        }
        vector<int> temp1;
        if(query[0].second == '?'){
            int y = (x+query[0].first)%n;
            if(y == 0){
                temp1.push_back(n);
            }
            else{
                temp1.push_back(y);
            }
            y = x-query[0].first;
            if(y == 0){
                y = n;
            }
            else if(y < 0){
                while(y < 0){
                    y += n;
                }
            }
            temp1.push_back(y);
        }
        else if(query[0].second == '0'){
            int y = (x+query[0].first)%n;
            if(y == 0){
                temp1.push_back(n);
            }
            else{
                temp1.push_back(y);
            }
        }
        else{
            int y = x-query[0].first;
            if(y == 0){
                y = n;
            }
            else if(y < 0){
                while(y < 0){
                    y += n;
                }
            }
            temp1.push_back(y);
        }
        res.push_back(temp1);
        int ind = 0;
        for(int i=1; i<m; i++){
            vector<int> temp;
            unordered_map<int, int> haha;
            for(int j=0; j<res[ind].size(); j++){
                if(query[i].second == '?'){
                    int y = (res[ind][j]+query[i].first)%n;
                    if(y == 0){
                        if(haha[n] < 1){
                            temp.push_back(n);
                        }
                        haha[n]++;
                    }
                    else{
                        if(haha[y] < 1){
                            temp.push_back(y);
                        }
                        haha[y]++;
                    }
                    y = res[ind][j]-query[i].first;
                    if(y == 0){
                        y = n;
                    }
                    else if(y < 0){
                        while(y < 0){
                            y += n;
                        }
                    }
                    if(haha[y] < 1){
                            temp.push_back(y);
                        }
                        haha[y]++;
                }
                else if(query[i].second == '0'){
                    int y = (res[ind][j]+query[i].first)%n;
                    if(y == 0){
                        if(haha[n] < 1){
                            temp.push_back(n);
                        }
                        haha[n]++;
                    }
                    else{
                        if(haha[y] < 1){
                            temp.push_back(y);
                        }
                        haha[y]++;
                    }
                }
                else{
                    int y = res[ind][j]-query[i].first;
                    if(y == 0){
                        y = n;
                    }
                    else if(y < 0){
                        while(y < 0){
                            y += n;
                        }
                    }
                    if(haha[y] < 1){
                            temp.push_back(y);
                        }
                        haha[y]++;
                }
            }
            res.push_back(temp);
            ind++;
        }
        vector<int> fin;
        unordered_map<int, int> hashh;
            for(int j=0; j<res[res.size()-1].size(); j++){
                if(hashh[res[res.size()-1][j]] < 1) fin.push_back(res[res.size()-1][j]);
                hashh[res[res.size()-1][j]]++;
            }
        sort(fin.begin(), fin.end());
        cout << fin.size() << endl;
        for(int i=0; i<fin.size(); i++){
            cout << fin[i] << " ";
        }
        cout << endl;
    }

    return 0;
}