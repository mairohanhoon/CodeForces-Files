#include<bits/stdc++.h>
using namespace std;

int main(){

        unordered_map<string, string> mp;
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for(int i=0; i<m; i++){
            string a, b;
            cin >> a >> b;
            if(a.size() <= b.size()){
                mp[a] = a;
                mp[b] = a;
            }
            else{
                mp[b] = b;
                mp[a] = b;
            }
        }
        for(int i = 0; i < n; i++){
            cin >> v[i];
            cout << mp[v[i]] << " ";
        }
        cout << endl;

    return 0;
}