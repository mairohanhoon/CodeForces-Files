#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    int p, q;
    cin >> p;
    vector<int> res;
    int temp;
    for(int i=0; i<p; i++){
        cin >> temp;
        res.push_back(temp);
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> temp;
        res.push_back(temp);
    }

    sort(res.begin(), res.end());

    int i = 0;
    int x = 1;
    int check = 1;
    int siz = res.size();
    if(siz == 0){
        cout << "Oh, my keyboard!" << endl;
    }
    else{
        while(i <= siz){
            if(res[i] == check){
                check++;
            }
            else{
                break;
            }

            if(res[i] == res[i+1]){
                x = 1;
                while(res[i] == res[i+x]){
                    x++;
                }
                i += x;
            }
            else{
                i++;
            }
        }
        if(check <= n){
            cout << "Oh, my keyboard!" << endl;
        }
        else{
            cout << "I become the guy." << endl;
        }
    }

    return 0;
}