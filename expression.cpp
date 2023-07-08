#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b,c,p,q,r,s,t;
    cin >> a >> b >> c;

    p = a+(b*c);
    q = a*(b+c);
    r = a*b*c;
    s = (a+b)*c;
    t = a+b+c;

    cout << max(p, max(q, max(r, max(s,t)))) << endl;

    return 0;
}