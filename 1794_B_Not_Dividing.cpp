#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 1){
                v[i]++;
            }
        }
        int check = v[0];
        
        for(int i=1; i<n; i++){
            if(v[i] % check == 0){
                do{
                    v[i]++;
                }while(v[i] % check == 0);
            }
            check = v[i];
        }
        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}