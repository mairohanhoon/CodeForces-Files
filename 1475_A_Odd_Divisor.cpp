#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        bool flag = true;
        while(n > 1){
            if(n%2 != 0){
                flag = false;
                break;
            }
            n/=2;
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    } 

    return 0;
}