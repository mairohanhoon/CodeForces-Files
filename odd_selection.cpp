#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int odd = 0;
        int even = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 != 0){
                odd++;
            }
            else{
                even++;
            }
        }
        if(x%2 != 0){
            if(x>odd){
                if(odd%2 !=0){
                    cout << "YES" << endl;
                }
                else{
                    
                }
            }
        }
    }

    return 0;
}
//not solved