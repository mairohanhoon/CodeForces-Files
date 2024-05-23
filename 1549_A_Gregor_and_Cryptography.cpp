#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, vector<int>> mp;
        for(int i=2; i<=n; i++){
            mp[n%i].push_back(i);
            if(mp[n%i].size() == 2) break;
        }
        bool flag = true;
        for(auto it:mp){
            if(it.second.size() >= 2){
                cout << it.second[0] << " " << it.second[1] << endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Na hua" << endl;
        }
    }

    return 0;
}