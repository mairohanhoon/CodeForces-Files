#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(a < b)
            swap(a, b);
        long long diff = a-b;
        if(diff == 0){
            cout << "0 0" << endl;
        }
        else{
            long long x = b%diff;
            long long y = diff - (b%diff);
            cout << a-b << " " << min(x, y) << endl;
        }
    }

    return 0;
}