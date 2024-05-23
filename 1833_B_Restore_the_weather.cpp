#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector<int> c = a;
        sort(c.begin(), c.end());
        map<int, vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[c[i]].push_back(b[i]);
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = mp[a[i]].back();
            mp[a[i]].pop_back();
        }
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}