#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a>> b;
        cin >> c >> d;
        int flag = 0;
        for(int i=0; i<=3; i++){
            if(a < b && a < c && b < d && c < d){
                cout << "YES" << endl;
                flag = 1;
            }
            else{
                int temp = a;
                a = c;
                c = d;
                d = b;
                b = temp;
            }
            if(flag == 1){
                break;
            }
        }
        if(flag == 0){
            cout << "NO" << endl;
        }
    }

    return 0;
}