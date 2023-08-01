#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int vol = k*l;
    int slices = c*d;
    vol = vol/nl;
    p = p/np;
    int x = min(slices, min(vol, p));
    x = x/n;
    if(x >= n){
        cout << n << endl;
    }
    else{
        cout << x << endl;
    }
    return 0;
}