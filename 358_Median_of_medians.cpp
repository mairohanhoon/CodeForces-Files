#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a(3);
    vector<int> b(3);
    vector<int> c(3);
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];
    cin >> c[0] >> c[1] >> c[2];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int res = a[1]+b[1]+c[1];
    res -= min(a[1], min(b[1], c[1]));
    res -= max(a[1], max(b[1], c[1]));
    cout << res << endl;

    return 0;
}