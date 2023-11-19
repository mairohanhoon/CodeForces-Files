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
        if(n < 11){
            cout << "NO" << endl;
        } 
        else if(n == 11){
            if(str[0] == '8'){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            int check = 0;
            for(int i = n-11; i>=0; i--){
                if(str[i] == '8'){
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                cout << "YES" << endl;
            } 
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}