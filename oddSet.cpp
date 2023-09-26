#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n *= 2;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int count_odd = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 != 0){
                count_odd++;
            }
        }
        if(count_odd%2 == 0){
            if(count_odd%4==0){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
        else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}