#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n%k != 0){
            cout <<1 << endl;
            cout << n << endl;
        }
        else{
            cout << 2 << endl;
            cout << k+1 << " " << n-k-1 << endl;
        }
    }

    return 0;
}