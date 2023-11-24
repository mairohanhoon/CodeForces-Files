#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b){
            cout << 0 << endl;
        }
        else if(abs(a-b) == 2){
            cout << 1 << endl;
        }
        else{
            double x = abs(a-b);
            x = ceil(x/2);
            if(abs(a-b)%c == 0 && abs(a-b)%2 == 0){
                int ans;
                if(ceil(x)>c){
                    ans = x/c;
                }
                else{
                    ans = ceil(x/2);
                }
                cout << ans << endl;
            }
            else{
                int ans;
                if(ceil(x)%c == 0 && x>c){
                    ans = (x/c);
                }
                else if(ceil(x)%c != 0 && x>c){
                    ans = (x/c)+1;
                }
                else{
                    ans = x/2;
                }
                cout << ans << endl;
            }
        }
    }

    return 0;
}