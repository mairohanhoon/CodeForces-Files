#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x == 0){
            cout << 1 << endl;
        }
        else{
            cout << (x+1)+(y*2) << endl;
        }
    }

    return 0;
}