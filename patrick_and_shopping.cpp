#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, d;
    cin >> a >> b >> d;
    int n1 = (2*a) + (2*b);
    int n2 = a+b+d;
    int n3 = (2*a)+ (2*d);
    int n4 = (2*b)+(2*d);

    cout << min(n1, min(n2, min(n3, n4))) << endl;

    return 0;
}