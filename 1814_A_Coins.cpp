#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long k, n;
        cin >> n >> k;
        if(n%2 == 0){
            cout << "YES" << endl;
        }
        else{
            if(k%2 == 0){
                cout << "NO" << endl;
            }
            else if(n<k){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}