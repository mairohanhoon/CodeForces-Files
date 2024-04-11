#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, n;
    cin >> x >> n;
    vector<string> res(n);
    for(int i=0; i<n; i++){
        cin >> res[i];
    }
    x--;
    cout << res[x%n] << endl;

    return 0;
}