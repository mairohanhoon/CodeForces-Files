#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int count = 0;
        int ind = 0;
        for(int i=0; i<n; i++){
            if(b[i] < a[ind]){
                count++;
            }
            else{
                ind++;
            }
        }
        cout << count << endl;
    }

    return 0;
}