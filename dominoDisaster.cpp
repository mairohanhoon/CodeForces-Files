#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        string res;
        for(int i=0; i<n; i++){
            if(str[i] == 'U'){
                res += "D";
            }
            else if(str[i] == 'D'){
                res += "U";
            }
            else{
                res += str[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}