#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        long long total = 0;
        int even = 0, odd = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
            if(a[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        for(int i=0; i<q; i++){
            int x, y;
            cin >> x >> y;
            if(x == 0){
                total += even * y;
                if(y%2 != 0){
                    odd += even;
                    even = 0;
                }
            }
            else{
                total += odd * y;
                if(y%2 != 0){
                    even += odd;
                    odd = 0;
                }
            }
            cout << total << endl;
        }
    }

    return 0;
}