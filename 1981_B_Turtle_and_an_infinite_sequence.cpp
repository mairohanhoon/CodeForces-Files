#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long res = a;
        for(long long i=1; i<=b; i++){
            if(a-i >= 0){
                res = res | (a-i);
            }
            res = res | (a+i);
        }
        cout << res << endl;
    }
    return 0;
}