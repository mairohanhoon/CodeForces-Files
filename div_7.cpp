#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x%7 == 0){
            cout << x << endl;
        }
        else{
            if(x%10 < x%7){
                x += 7-(x%7);
            }
            else{
                x -= x%7;
            }
            cout << x << endl;
        }
    }

    return 0;
}