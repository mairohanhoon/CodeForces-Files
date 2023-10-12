#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;
    int count = 1;
    int num = 1;
    while(num < x){
        num *= 2;
    }
    if(num == x){
        cout << 1 << endl;
    }
    else{
        cout << x-(num/2)+1 << endl;
    }

    return 0;
}