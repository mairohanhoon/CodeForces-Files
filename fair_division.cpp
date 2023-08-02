#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 1){
                count++;
            }
            sum += a[i];
        }
        if(sum%2 == 0){
            if(count == 0){
                if(sum%n == 0){
                    cout << "YES" << endl;
                } 
                else{
                    cout << "YES" << endl;
                }
            }
            else{
                cout << "YES" << endl;
            }

        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}