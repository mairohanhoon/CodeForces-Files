#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string s = "";
        int check = 1;
        for(int i=0; i<str.size(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                s += str[i];
                check = 1;
            }
            else if(str[i] >='0' && str[i] <= '9'){
                if(check == 1){
                    s += str[i];
                    check = 0;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}