#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        char aa = 'a';
        for(int i=0; i<8; i++){
            char temp = i+48+1;
            string res = "";
            char x = str[0];
            res.append(1,x);
            res.append(1, temp);
            if(temp != str[1]){
                cout << res << endl;
            }
        }
        for(int i=0; i<8; i++){
            string res = "";
            char x = str[1];
            res.append(1, aa);
            res.append(1, x);
            if(aa != str[0]){
                cout << res << endl;
            }
            aa++;
        }
    }

    return 0;
}