#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0){
            cout << 0 << endl;
        }
        else{
            cout << ((23-a)*60)+(60-b) << endl;
        }
    }

    return 0;
}