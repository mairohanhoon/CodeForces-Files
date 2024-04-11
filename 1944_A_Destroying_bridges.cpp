#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k < n-1){
            cout << n << endl;
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}