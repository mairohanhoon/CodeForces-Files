#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    if(min(b,c) < a){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;
}