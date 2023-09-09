#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    string res;
    cin >> str;
    char temp;
    int i=0;
    while(i<str.size()){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i+=3;
            if(res.size()!=0 && res[res.size()-1] != ' '){
                res.append(" ");
            }
        }
        else{
            temp = str[i];
            res.append(1,temp);
            i++;
        }
    }
    cout << res << endl;

    return 0;
}