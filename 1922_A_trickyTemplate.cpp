#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int check = 0;
        for(int i=0; i<n; i++){
            if((a[i] == c[i] && a[i] != b[i]) || (b[i] == c[i] && a[i] != b[i])){
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}