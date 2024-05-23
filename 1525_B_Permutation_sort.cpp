#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> a(n);
        int maxxi = 0, minni = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            maxxi = max(maxxi, a[i]);
            minni = min(minni, a[i]);
        }
        vector<int> b = a;
        sort(b.begin(), b.end());
        if(b == a) cout << 0 << endl;
        else if(a[0] == minni || a[n-1] == maxxi) cout << 1 << endl;
        else if(a[0] == maxxi && a[n-1] == minni) cout << 3 << endl;
        else cout << 2 << endl;
    }

    return 0;
}