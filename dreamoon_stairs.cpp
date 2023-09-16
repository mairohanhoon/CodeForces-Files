#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    if(m>n){
        cout << -1 << endl;
    }
    else if(m == n){
        cout << m << endl;
    }
    else{
        int temp;
        if(n%2 == 0){
            temp = n/2;
        }
        else{
            temp = (n/2)+1;
        }
        if(temp%m == 0){
            cout << temp << endl;
        }
        else{
            cout << temp + (m-(temp%m)) << endl;
        }
    }

    return 0;
}