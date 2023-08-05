#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> res;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int i=0;
        int x = 1;
        while(i<n-1){
            if(arr[i] == arr[i+1]){
                x = 1;
                while(arr[i] == arr[i+x]){
                    x++;
                }
                if(x>=3){
                    res.push_back(arr[i]);
                }
                i+=x;
            }
            else{
                i++;
            }
        }
        if(res.size() == 0){
            cout << "-1" << endl;
        }
        else{
            cout << res[res.size()-1] << endl;
        }
    }

    return 0;
}