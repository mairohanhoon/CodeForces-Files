#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string S;
    cin >> S;
    int distinct = 0;
    int i=0;
    int x=1;
    sort(S.begin(), S.end());
    while(i<S.size()){
        x = 1;
        if(S[i] == S[i+1]){
            while(S[i] == S[i+x]){
                x++;
            }
            distinct++;
            i+=x;
        }
        else{
            distinct++;
            i+=x;
        }
    }

    if(distinct%2==0)
        cout <<"CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}