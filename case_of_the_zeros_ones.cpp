#include<bits/stdc++.h>
using namespace std;

string change(string str){
    if(str.size() <= 1){
        return str;
    }
    else{
        char temp;
        string res;
        int check = 0;
        int i=0;
        while(i<str.size()){
            if(str[i] == '1' && str[i+1] == '0'){
                check = 1;
                i+=2;
            }
            else if(str[i] == '0' && str[i+1] == '1'){
                check = 1;
                i+=2;
            }
            else{
                temp = str[i];
                res.append(1, temp);
                i++;
            }
        }
        if(check == 1){
            return change(res);
        }
        else{
            return res;
        }
    }
}

int main(){

    int n;
    string str;
    cin >> n;
    cin >> str;
    str = change(str);
    cout << str.size() << endl;
    return 0;
}