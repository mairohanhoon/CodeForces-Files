#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int x = max(a, max(b, c));
        int count = 0;
        if(a == x){
            count++;
        }
        if(b == x){
            count++;
        }
        if(c == x){
            count++;
        }
        if(count == 1){
            if(a == x){
                a=0;
            }
            else{
                a = x-a+1;
            }
            if(b == x){
                b=0;
            }
            else{
                b = x-b+1;
            }
            if(c == x){
                c=0;
            }
            else{
                c = x-c+1;
            }
        }
        else{
            x++;
            a = x-a;
            b = x-b;
            c = x-c;
        }
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}