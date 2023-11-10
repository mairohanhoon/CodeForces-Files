#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int num; // denotes the current building
        cin >> num;
        int digit = 0;
        int temp;
        if(num < 10){
            digit = 1;
            temp = num;
            temp--;
        }
        else if(num >= 10 && num < 100){
            digit = 2;
            temp = num/10;
            temp--;
        }
        else if(num >= 100 && num < 1000){
            digit = 3;
            temp = num/100;
            temp--;
        }
        else{
            digit = 4;
            temp = num/1000;
            temp--;
        }
        int res = 10*temp;
        if(digit == 1){
            res += 1;
        } 
        else if(digit == 2){
            res += 3;
        }
        else if(digit == 3){
            res += 6;
        }
        else{
            res += 10;
        }

        cout << res << endl;
    }

    return 0;
}