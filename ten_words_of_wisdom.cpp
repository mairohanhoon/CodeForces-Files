#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[50];
        int b[50];

        for(int i=0; i<n; i++){
            cin >> a[i];
            cin >> b[i];
        }
        int res = 1;
        int maxxi = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= 10 && b[i] > maxxi){
                res = i+1;
                maxxi = b[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}