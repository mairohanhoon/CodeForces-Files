#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a, b, n;
        cin>>a>>b>>n;
        long long sum = b;
        long long x;
        for (int i = 0; i < n; i++) {
            cin>>x;
            if (x < a) {
                sum += x;
            } else {
                sum += (a - 1);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}