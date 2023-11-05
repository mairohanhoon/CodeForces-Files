#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x, a;
        cin >> n >> x >> a;
        int modd = a%n;
        if(modd == x){
            cout << a << endl;;
        }
        else if(modd < x){
            cout << a-(modd+(n-x)) << endl;
        }
        else{
            cout << a-(modd-x) << endl;
        }
    }

    return 0;
}