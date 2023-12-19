#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;
    int n = min(x, y);
    int total = 1;
    while(n>=1){
        total *= n;
        n--;
    }
    cout << total << endl;

    return 0;
}