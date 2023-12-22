#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd == 0){
            cout << "NO" << endl;
        }
        else if(odd == 2 && even == 1){
            cout << "NO" << endl;
        }
        else if(even == 0){
            cout << "YES" << endl;
            cout << "1 2 3" << endl;
        }
        else if(odd >= 3){
            cout << "YES" << endl;
            int count = 0;
            for(int i=0; i<n; i++){
                if(arr[i] %2 != 0){
                    cout << i+1 << " ";
                    count++;
                    if(count == 3){
                        cout << endl;
                        break;
                    }
                }
            }
        }
        else{
            cout << "YES" << endl;
            int count = 0;
            for(int i=0; i<n; i++){
                if(arr[i] %2 == 0){
                    cout << i+1 << " ";
                    count++;
                    if(count == 2){
                        break;
                    }
                }
            }
            for(int i=0; i<n; i++){
                if(arr[i]%2 != 0){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}