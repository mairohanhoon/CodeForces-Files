#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3 == 0){
            cout << n/3 << endl;
        }
        else{

            if(n%3 == 2){
                cout << (n/3)+1 << endl;
            }
            else if(n==1){
                cout << 2 << endl;
            }
            else{
                if(n/2 > (n/3)+2) {
                    cout << (n/3)+2 << endl;
                }
                else{
                    cout << n/2 << endl;
                }
            }
        }
    }

    return 0;
}