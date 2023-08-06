#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        string res;
        cin >> res;
        int a, b;
        a = res[0] -48;
        b = res[2] -48;
        cout << a+b << endl;
    }

    return 0;
}