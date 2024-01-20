#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int diff = abs(x-y);
        if(diff %2 == 0){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }

    return 0;
}