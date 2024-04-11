#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int min_a = INT_MAX, min_b = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            min_a = min(min_a, a[i]);
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
            min_b = min(min_b, b[i]);
        }
        long long ans = 0;
        for(int i=0; i<n; i++){
            int temp = min(a[i]-min_a, b[i]-min_b);
            a[i] -= temp;
            b[i] -= temp;
            ans += temp;
            ans += a[i] - min_a;
            ans += b[i] - min_b;
        }
        cout << ans << endl;

    }

    return 0;
}