#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long a, b, m;
        cin >> a >> b >> m;
        cout << ((m/a)+1) + ((m/b)+1) << endl;
    }

    return 0;
}