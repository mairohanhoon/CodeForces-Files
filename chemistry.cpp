#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> hashh;
        for(int i=0; i<n; i++){
            hashh[str[i]]++;
        }
        int count_odd = 0;
        for(auto it:hashh){
            if(it.second%2 != 0){
                count_odd++;
            }
        }
        if(count_odd-1 > k){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}