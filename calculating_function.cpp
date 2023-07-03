#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = -1;
    int sum = a+b;
    while(max(abs(a), abs(b)) != n){
        if(max(abs(a), abs(b)) == abs(a)){
            b = b-2;
            sum = sum + b;
        }
        else{
            a = a+2;
            sum = sum + a;
        }
    }
    cout << sum << endl;
    return 0;
} 

//Time limit suceeded