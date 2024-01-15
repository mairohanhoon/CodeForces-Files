#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    char check = 'a';
    int total = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]!=check){
            int diff = abs(check - str[i]);
            if(diff > 13){
                diff = 26-diff;
            }
            total += diff;
            check = str[i];
        }
    }
    cout << total << endl;

    return 0;
}