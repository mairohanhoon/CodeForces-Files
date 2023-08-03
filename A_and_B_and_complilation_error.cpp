#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int n1 = n-1;
    int n2 = n-2;
    int a[n];
    int b[n1];
    int c[n2];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n1; i++){
        cin >> b[i];
    }
    for(int i=0; i<n2; i++){
        cin >> c[i];
    }

    int res1, res2;
    sort(a, a+n);
    sort(b, b+n1);
    sort(c, c+n2);
    int check1=0;
    int check2=0;
    for(int i=0; i<n1; i++){
        if(a[i] != b[i]){
            res1 = a[i];
            check1 = 1;
            break;
        }
    }
    for(int i=0; i<n2; i++){
        if(b[i]!=c[i]){
            res2 = b[i];
            check2 = 1;
            break;
        }
    }

    if(check1 == 0){
        res1 = a[n-1];
    }

    if(check2 == 0){
        res2 = b[n1-1];
    }

    cout << res1 << endl;
    cout << res2 << endl;

    return 0;
}