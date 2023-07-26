#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int sum = 0;
        int minn = a[0];
        for(int i=0; i<n; i++){
            if(a[i] < minn){
                minn = a[i];
            }
        }
        for(int i=0; i<n; i++){
            sum += (a[i]-minn);
        }
        cout << sum << endl;
    }

    return 0;
}