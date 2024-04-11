#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int res = 0;
        for(int i=1; i<n; i++){
            for(int j=i+1; j<=n; j++){
                res = max(res, __gcd(i, j));
            }
        }
        cout << res << endl;
    }

    return 0;
}