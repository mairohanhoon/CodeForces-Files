#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n*n);
        map<int, int> mp;
        int minn = INT_MAX;
        for(int i=0; i<n*n; i++){
            cin >> v[i];
            mp[v[i]]++;
            minn = min(minn, v[i]);
        }
        vector<vector<int>> a(n, vector<int>(n));
        a[0][0] = minn;
        mp[minn]--;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(i != 0){
                a[i][0] = a[i-1][0] + c;
                if(mp[a[i][0]] > 0){
                    mp[a[i][0]]--;
                }
                else{
                    flag = true;
                    break;
                }
            }
            
            for(int j=1; j<n; j++){
                a[i][j] = a[i][j-1] + d;
                if(mp[a[i][j]] > 0){
                    mp[a[i][j]]--;
                }
                else{
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}