#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%3 == 0){
            cout << x/3 << " " << x/3 << endl;
        }
        else if(x%3 == 1){
            cout << (x/3)+1 << " " << x/3 << endl;
        }
        else{
            cout << (x/3) << " " << (x/3)+1 << endl;
        }
    }

    return 0;
}