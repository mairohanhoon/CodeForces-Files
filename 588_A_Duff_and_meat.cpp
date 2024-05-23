#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int total = 0;
    int minni = INT_MAX;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        if(b[i] < minni){
            minni = b[i];
        }
        total += a[i]*minni;
    }
    cout << total << endl;

    return 0;
}