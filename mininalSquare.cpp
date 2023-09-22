#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a>> b;
        int c = min(a,b);
        int d = max(a,b);
        if(a == b){
            cout << (2*a)*(2*b) << endl;
        }
        else if(2*c >= d){
            cout << (2*c)*(2*c)<< endl;
        }
        else{
            cout << d*d << endl;
        }
    }

    return 0;
}