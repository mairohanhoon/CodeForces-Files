#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str, check;
        cin >> str >> check;
        int n = str.size();
        int m = check.size();
        string res = "";
        map<char, int> mp;
        for(int i=n-1; i>=0; i--){
            if(str[i] == check[m-1] && mp[str[i]] < 1){
                res += str[i];
                m--;
            }
            else mp[str[i]]++;
        }
        reverse(res.begin(), res.end());
        if(res == check) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}