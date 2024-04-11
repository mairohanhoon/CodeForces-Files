#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, y, z;
    cin >> x >> y >> z;
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(x/a, min(y/b, z/c)) << endl;

    return 0;
}