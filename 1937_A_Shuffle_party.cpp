#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long res = 1;
        for(long long i=1; i<=n; i*=2){
            res = i;
        }
        cout << res << endl;
    }

    return 0;
}