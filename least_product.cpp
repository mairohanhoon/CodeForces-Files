#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int neg = 0;
        int pos = 0;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                flag = 1;
                break;
            }
            else if(arr[i] > 0){
                pos++;
            }
            else{
                neg++;
            }
        }
        if(flag == 1){
            cout << 0 << endl;
        }
        else{
            if(neg !=0 && neg%2 != 0){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
                cout << "1 0" << endl;
            }
        }
    }

    return 0;
}