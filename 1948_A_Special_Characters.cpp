#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << "YES" << endl;
            cout << "AA";
            n-=2;
            while(n!=0){
                cout << "BAA";
                n-=2;
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}