#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    string res;
    cin >> s;
    char temp;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            temp = '0';
            res.append(1, temp);
        }
        else{
            if(s[i+1] == '.'){
                temp = '1';
                res.append(1, temp);
            }
            else{
                temp = '2';
                res.append(1, temp);
            }
            i++;
        }
    }
    cout << res << endl;

    return 0;
}