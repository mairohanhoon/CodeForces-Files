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
        int count = 0;
        int counti = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '1'){
                count++;
                if(i > 0 && str[i-1] == '1') counti++;
            }
        }
        if(count == 2 && counti == 1) cout << "N0" << endl;
        else if(count%2 == 0 && n%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}