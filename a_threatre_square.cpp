#include<iostream>
using namespace std;

int main(){

    long long int n, m, a;
    cin >> n >> m >> a;
    long long int b, l;
    if(m%a == 0)
        b = m/a;
    else 
        b = (m/a)+1;
    
    if(n%a == 0)
        l = n/a;
    else
        l = (n/a)+1;
    cout << l*b << endl;
    return 0;
}