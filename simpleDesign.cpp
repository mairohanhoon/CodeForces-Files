#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, k;
        cin >> x >> k;
        while(1){
            if(digit_sum(x)%k == 0){
                cout << x << endl;
                break;
            }
            else{
                x++;
            }
        }
    }

    return 0;
}