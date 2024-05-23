#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int com = 0;
        if(n%m == 0){
            com = n/m;
        }
        else{
            com = n/m + 1;
        }
        if(k >= n-com){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}