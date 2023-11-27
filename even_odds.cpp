#include<iostream>
using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;
    long long i = 1;
    k--;
    while(i+2 <= n && k > 0){
        i+=2;
        k--;
    }
    if(k == 0){
        return i;
    }
    else{
        i = 2;
        k--;
        while(i <= n && k!=0){
            i+=2;
            k--;
        }
        cout << i << endl;
    }
    return 0;
}