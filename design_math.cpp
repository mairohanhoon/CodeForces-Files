#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    if(t%2 == 0){
        cout << 8 << " " << t-8 << endl;
    }
    else{
        cout << 9 << " " << t-9 << endl;
    }
    return 0;
}