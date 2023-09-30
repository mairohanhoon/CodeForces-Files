#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a>> b >> n;
        int count = 0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int i=0;
        while(b!=0){
            if(b==1 && i<n){
                b+=arr[i];
                i++;
                b = min(b,a);
            }
            count++;
            b--;
        }
        cout<<count<<endl;
    }

    return 0;
}