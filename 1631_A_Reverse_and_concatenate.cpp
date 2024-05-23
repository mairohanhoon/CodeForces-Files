#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;  
        string str;
        cin >> str;
        string res = str;
        reverse(res.begin(), res.end());
        if(res == str){
            cout << 1 << endl;
        }
        else{
            if(k == 0){
                cout << 1 << endl;
            }
            else cout << k << endl;
        }
    }

    return 0;
}