#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 1;
        int res = 1;
        for(int i=1; i<n; i++){
            if(str[i] == str[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            res = max(res, count);
        }
        cout << res+1 << endl;
    }

    return 0;
}