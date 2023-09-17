#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int count = 0;
        int check =1;
        while(check == 1 && x!=1){
            if(x%6 == 0){
                count++;
                x/=6;
            }
            else if(x%3 == 0){
                x*=2;
                count++;
            }
            else{
                check = 0;
            }
        }
        if(check == 0){
            cout << -1 << endl;
        }
        else{
            cout << count << endl;
        }
    }
}