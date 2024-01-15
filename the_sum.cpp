#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ans = 0;
    int first = 1;
    int second = 1;
    while(n--){
        ans += first;
        int temp = first;
        first = second;
        second += temp;
    }
    cout << ans << endl;
    return 0;
}