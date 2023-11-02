#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    if(n%2 == 0){
        sum = n/2;
    }
    else{
        sum = -((n/2)+1);
    }
    cout << sum << endl;
    return 0;
} 
