#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        string uniq = "";
        for(int i=0; i<n; i++){
            if(mp[str[i]] < 1){
                mp[str[i]]++;
                uniq += str[i];
            }
        }
        sort(uniq.begin(), uniq.end());
        unordered_map<char, char> hashh;
        int x = uniq.size()-1;
        for(int i=0; i<uniq.size(); i++){
            if(i <= x){
                hashh[uniq[i]] = uniq[x];
                hashh[uniq[x]] = uniq[i];
                x--;
            }
            else{
                break;
            }
        }
        string res = "";
        for(int i=0; i<n; i++){
            res += hashh[str[i]];
        }
        cout << res << endl;
    }

    return 0;
}