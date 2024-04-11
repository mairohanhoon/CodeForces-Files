#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string a= "";
        bool flag = true;
        for(int i=0; i<str.size()-1; i++){
            a += str[i];
            string b = str.substr(i+1, str.size()-(i+1));
            if(b[0] == '0') continue;
            else{
                if(stoi(a) < stoi(b)){
                    flag = false;
                    cout << a << " " << b << endl;
                    break;
                }
            }
        }
        if(flag) cout << -1 << endl;

    }

    return 0;
}