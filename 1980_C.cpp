#include<bits/stdc++.h>
#define f for
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        map<int, int> checker;
        f(int i=0; i<n; i++){
            cin >> a[i];
        }
        f(int i=0; i<n; i++){
            cin >> b[i];
            checker[b[i]]++;
        }
        int m;
        cin >> m;
        vector<int> d(m);
        map<int, int> mp;
        f(int i=0; i<m; i++){
            cin >> d[i];
            mp[d[i]]++;
        }
        bool flag = true;
        if(checker[d[m-1]] == 0){
            cout << "NO" << endl;
            continue;
        }
        f(int i=0; i<n; i++){
            if(mp[b[i]] == 0){
                flag = false;
                break;
            }
            else{
                mp[b[i]]--;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}