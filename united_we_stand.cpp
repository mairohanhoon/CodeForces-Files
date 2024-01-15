#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        map<int, int> hash;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            hash[arr[i]]++;
        }
        if(hash.size() < 2){
            cout << -1 << endl;
        }
        else{
            int check = 0;
            for(auto it:hash){
                if(check == 0){
                    cout << it.second << " " << n-it.second << endl;
                }

                if(check == 0){
                    while(it.second != 0){
                        cout << it.first << " ";
                        it.second--;
                    }
                    cout << endl;
                    check = 1;
                }
                else{
                    while(it.second != 0){
                        cout << it.first << " ";
                        it.second--;
                    }
                }
            }
            cout << endl;
        }

    }

    return 0;
}