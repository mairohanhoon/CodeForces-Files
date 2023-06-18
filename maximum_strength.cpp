#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        unsigned long long int a, b;
        cin >> a >> b;
        unsigned long long int sum = 0;
        while(a!=0 && b!=0){
            int x = a%10;
            int y = b%10;
            a = a/10;
            b = b/10;
            sum = abs(x-y) + sum;
        }
        cout << sum << endl;
    }

    return 0;
}