#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int c = min(a,b);
    if(c%2 == 1){
        cout << "Akshat" << endl;
    }
    else{
        cout << "Malvika" << endl;
    }

    return 0;
}