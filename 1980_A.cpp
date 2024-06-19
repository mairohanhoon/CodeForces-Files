#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[str[i]]++;
        }
        int count = 0;
        for(char i='A'; i<='G'; i++){
            if(mp[i] < m){
                count += m-mp[i];
            }
        }
        cout << count << endl;
    }

    return 0;
}