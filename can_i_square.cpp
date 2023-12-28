#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        long long total = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            total += arr[i];
        }
        int check = 0;
        long long i=1;
        while(i*i <= total){
            if(i*i == total){
                check = 1;
            }
            i++;
        }
        if(check == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}