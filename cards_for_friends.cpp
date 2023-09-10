#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        int count = 0;
        while(x>1 && x%2==0){
            count++;
            x /= 2;
        }
        while(y>1 && y%2==0){
            count++;
            y /= 2;
        }
        count = pow(2, count);
        if(count >= n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}