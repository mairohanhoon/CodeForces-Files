#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        if(y<=x){
            cout << x << endl;
        }
        else{
            if(x+k < y){
                int total = x;
                total += k;
                total += 2*(y-total);
                cout << total << endl;
            }
            else{
                cout << y << endl;
            }
        }
    }

    return 0;
}
