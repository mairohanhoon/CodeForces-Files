#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        int check = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2 != 0){
                count++;
            }
            else{
                check = 1;
            }
        }
        if(count%2 != 0){
            cout << "YES" << endl;
        }
        else{
            if(count == 0){
                cout << "NO" << endl;
            }
            else{
                if(check == 1){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}