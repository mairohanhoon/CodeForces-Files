#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n; i++){
            cin >> arr[i];
        }
        if(n == 1){
            cout << "NO" << endl;
            continue;
        }
        vector<int> odd;
        vector<int> even;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        unordered_map<int, int> hashh;
        for(int i=0; i<even.size(); i++){
            int total = 0;
            for(int j=i; j<even.size(); j++){
                total += even[j];
                hashh[total]++;
            }
        }
        int check = 0;
        for(int i=0; i<odd.size(); i++){
            int total = 0;
            for(int j=i; j<odd.size(); j++){
                total += odd[j];
                if(hashh[total] > 0){
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                break;
            }
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