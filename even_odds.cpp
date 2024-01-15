#include<iostream>
using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;
    long long check;
    if(n%2 == 0){
        check = n/2;
    }
    else{
        check = (n/2)+1;
    }
    if(k <= check){
        cout << (k*2)-1;
    }
    else{
        cout << (k-check)*2 << endl;
    }
    return 0;
}