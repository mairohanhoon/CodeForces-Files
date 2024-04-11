#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string res = "";
        if(str[0] == '0' && str[1] == '0'){
            res += "12";
            res += str[2];
            res += str[3];
            res += str[4];
            res += " AM";

        }
        else if(str[0] == '0' || (str[0] == '1' && str[1] <= '2')){
            res += str[0];
            res += str[1];
            res += str[2];
            res += str[3];
            res += str[4];
            if(str[0] == '1' && str[1] == '2')
                res += " PM";
            else    
                res += " AM";
        }
        else{
            string temp = "";

            temp += str[0];
            temp += str[1];
            int check = stoi(temp);
            check -= 12;
            if(check < 10){
                res+='0';
            }
            temp = to_string(check);
            res += temp;
            res += str[2];
            res += str[3];
            res += str[4];
            res += " PM";
        }
        cout << res << endl;
    }

    return 0;
}