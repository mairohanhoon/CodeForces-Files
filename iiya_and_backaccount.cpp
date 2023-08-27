#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    cin >> num;
    if(num > 0){
        cout << num << endl;
    }
    else if(num >=-10){
        cout << 0 << endl;
    }
    else{
        int a = num/10;
        int b = num%10 + ((num/100)*10);
        if(a<b){
            cout << b << endl;
        }
        else{
            cout << a << endl;
        }
    }

    return 0;
}