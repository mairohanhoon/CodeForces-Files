#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    int res = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
        res = max(res, mp[v[i]]);
    }
    cout << res << endl;

    return 0;
}