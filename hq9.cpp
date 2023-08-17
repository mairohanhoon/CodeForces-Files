#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    int check = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
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
    return 0;
}