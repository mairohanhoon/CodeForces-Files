#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    int count = n;
    while(n!=0){
        count += n/m;
        if(n < m){
            break;
        }
        n = (n/m) + (n%m);
    }
    cout << count << endl;

    return 0;
}