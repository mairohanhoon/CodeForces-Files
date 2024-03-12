#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string res = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                char temp = 'a';
                temp += j;
                res.append(1, temp);
            }
        }
        cout << res << endl;
    }

    return 0;
}