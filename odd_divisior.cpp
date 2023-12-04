#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long int x;
        cin >> x;
        if(x%2 != 0){
            cout << "YES" << endl;
        }
        else{
            int check = 0;
            for(long long int i=3; i<(x/2)+1; i+=2){
                if(x%i == 0){
                    check = 1;
                }
            }
            if(check == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}