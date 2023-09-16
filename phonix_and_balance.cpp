#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int temp;
        int num1 = 0;
        int num2 = 0;
        int n;
        cin >> n;
        int check = 0;
        if(n==2){
            num1 = 2;
            num2 = 4;
        }
        else{
            for(int i=1; i<=n/2; i++){
                if(check == 0){
                    num1 += pow(2,i) + pow(2,(n-i+1));
                    check = 1;
                }
                else{
                    num2 += pow(2,i) + pow(2,(n-i+1));
                    check = 0;
                }
            }
        }
        cout << abs(num1-num2) << endl;
    }

    return 0;
}
//NOT SOLVED