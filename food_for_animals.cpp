#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a,b,c,x,y;
        int check = 1;
        cin >> a >> b >> c >> x >> y;
        if(x>a){
            if(c<(x-a)){
                check = 0;
            }
            else{
                c= c-(x-a);
            }
        }
        if(y>b){
            if(c<(y-b)){
                check = 0;
            }
            else{
                c = c-(y-b);
            }
        }
        if(check == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}