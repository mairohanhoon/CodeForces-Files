#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n < 10){
            cout << n << endl;
        }
        else{
            int digits = 0;
            int x = n;
            while(x!=0){    
                digits++;
                x/=10;
            }
            int total = 0;
            digits--;
            total += 9*digits;
            total += n/pow(10, digits);
            cout << total << endl;
        }
    }

    return 0;
}