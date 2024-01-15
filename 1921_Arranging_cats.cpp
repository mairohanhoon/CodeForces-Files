#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string onee;
        string twoe;
        int total_one = 0;
        int total_two = 0;
        cin >> onee;
        cin >> twoe;
        for(int i=0; i<n; i++){
            if(onee[i] == '1'){
                total_one++;
            }
        }
        for(int i=0; i<n; i++){
            if(twoe[i] == '1'){
                total_two++;
            }
        }
        int ans = 0;
        int diff = 0;
        ans = abs(total_one-total_two);
        for(int i=0; i<n; i++){
            if(onee[i] != twoe[i]){
                diff++;
            }
        }
        diff =diff-ans;
        diff /= 2;
        ans = ans+diff;
        cout << ans << endl;
    }
    return 0;
}