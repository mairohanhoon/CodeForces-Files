#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        map<int, int> hashh;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            hashh[arr[i]]++;
        }
        if(hashh.size() == 1){
            cout << "Yes" << endl;
        }
        else if(hashh.size() > 2){
            cout << "No" << endl;
        }
        else{
            int num1[2];
            int i=0;
            for(auto it:hashh){
                num1[i] = it.second;
            }
            if(num1[0] == num1[1]){
                cout << "Yes" << endl; 
            }
            else if(num1[0]+1 == num1[1] || num1[0] == num1[1]+1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}