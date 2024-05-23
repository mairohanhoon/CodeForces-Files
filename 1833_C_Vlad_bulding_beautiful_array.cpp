#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        bool odd = false;
        bool even = false;
        int minn_odd = INT_MAX;
        int minn_even = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]%2 == 0){
                even = true;
                minn_even = min(minn_even, a[i]);
            }
            else{
                minn_odd = min(minn_odd, a[i]);
                odd = true;
                
            }
        }
        if(odd && even){
            if(minn_odd < minn_even){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}