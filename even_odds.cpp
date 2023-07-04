#include<iostream>
using namespace std;

int main(){

    int long long n, k;
    cin >> n >> k;
    int long long odd;
    if(n%2!=0){
        odd = (n+1) / 2; 
    }
    else{
        odd = n/2;
    }
    int long long result;
    int long long even = n-odd;
    if(k<=odd){
        result = 1;
        k--;
        while(k!=0){
            result = result + 2;
            k--;
        }
    }
    else{
        result = 2;
        k = k - odd;
        k--;
        while(k!=0){
            result = result + 2;
            k--;
        }
    }
    cout << result << endl;

    return 0;
}