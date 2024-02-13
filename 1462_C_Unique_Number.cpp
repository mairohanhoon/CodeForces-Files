#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check = 9;
        string res = "";
        while(n >= check && check >= 1){
            n -= check;
            string temp = to_string(check);
            check--;
            res = temp+res;
        }
        if(n < check && n != 0){
            string temp = to_string(n);
            res = temp+res;;
            n = 0;
        }
        if(n == 0){
            cout << res << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}