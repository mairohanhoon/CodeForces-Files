#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, n;
    cin >> x >> n;
    int count = 0;
    int i=1;
    while(1){
        int y = x*i;
        count++;
        if(y%10 == 0 || y%10 == n){
            cout << count << endl;
            break;
        }
        i++;
    }

    return 0;
}