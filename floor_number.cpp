#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int floor = 1;
        if(n<=2){
            cout << floor << endl;
        }
        else{
            if((n-2)%x == 0){
                floor += (n-2)/x;
            }
            else{
                floor += ((n-2)/x)+1;
            }
            cout << floor << endl;
        }
    }

    return 0;
}