#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }

    return 0;
}