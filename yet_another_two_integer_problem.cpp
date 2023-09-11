#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
         int a, b;
         cin >> a >> b;
         int c;
         if(a>b){
            c = a-b;
         }
         else{
            c = b-a;
         }

         if(c == 0){
            cout << 0 << endl;
         }
         else if(c%10 == 0){
            cout << c/10 << endl;
         }
         else{
            cout << (c/10)+1 << endl;
         }
    }

    return 0;
}