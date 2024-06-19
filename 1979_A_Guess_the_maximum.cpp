#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int res = INT_MAX;
        for(int i=0; i<n-1; i++){
            res = min(res, max(a[i], a[i+1]));
        }
        cout << res-1 << endl;
    }

    return 0;
}