#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        if(b%3 != 0){
            int less = 3-(b%3);
            if(c >= less){
                c-=less;
                b+=less;
                a += b/3;
                if(c%3 == 0) a += c/3;
                else a += (c/3)+1;
                cout << a << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        else{
            a += b/3;
            if(c%3 == 0) a += c/3;
            else a += (c/3)+1;
            cout << a << endl;
        }
    }

    return 0;
}