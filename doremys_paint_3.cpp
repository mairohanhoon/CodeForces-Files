#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> hashh;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            hashh[arr[i]]++;
        }
        int i=0;
        for(auto it:hashh){
            i++;
        }
        if(i>2){
            cout << "NO" << endl;
        }
        else if(i == 1){
            cout << "YES" << endl;
        }
        else{
            int a = arr[0];
            int x = 0;
            int y = 0;
            for(auto it:hashh){
                if(it.first == a){
                    x+=it.second;
                }
                else{
                    y+=it.second;
                }
            }
            if(x == y){
                cout << "YES" << endl;
            }
            else if(abs(x-y) == 1){
                cout << "YES" << endl;
            }
            else if(x == 1 && y == 2){
                cout << "YES" << endl;
            }
            else if(x == 2 && y == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}