#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string res = "";
        if(str[0] == '1'){
            res = str.substr(1, str.size()-1);
            str = res;
        }
        else{
            res = str;
            str[0]--;
        }
        if(res.size() == 0) cout << "0" << endl;
        else{
            res = "";
            bool flag = false;
            for(int i=0; i<str.size(); i++){
                if(str[i] == '0' && !flag) continue;
                else{
                    res += str[i];
                    flag = true;
                }
            }
            if(res.size() == 0) cout << "0" << endl;
            else cout << res << endl;
        }
    }

    return 0;
}