#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd%2 == 0){
            cout << "YES" << endl;
        }
        else if(odd%2 != 0){
            cout << "NO" << endl;
        }
    }

    return 0;
}