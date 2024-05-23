#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    int n = str.size();
    int a = 0;
    for(int i=0; i<n; i++){
        if(str[i] == 'a') a++;
    }
    if(a > n/2){
        cout << n << endl;
    }
    else{
        cout << (2*a)-1 << endl;
    }

    return 0;
}