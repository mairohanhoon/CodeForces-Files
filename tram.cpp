#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int count = 0;
    int maxx = INT_MIN;
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        count -=a;
        count += b;
        maxx = max(maxx, count);
    }
    cout << maxx << endl;

    return 0;
}