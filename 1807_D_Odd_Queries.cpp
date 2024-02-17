#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        int oddCount = 0;
        int evenCount = 0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if(temp %2 == 0){
                arr[i] = 0;
                evenCount++;
            }
            else{
                arr[i] = 1;
                oddCount++;
            } 
        }
        // cout << oddCount << " " << evenCount << endl;
        for(int i = 0; i<m; i++){
            int a, b, k;
            cin >> a >> b >> k;
            int toddCount = oddCount;
            int tevenCount = evenCount;
            int check = 1;
            if(k%2 == 0) check = 0;
            for(int j=a-1; j<b; j++){
                if(arr[j] != check){
                    if(check == 1){
                        toddCount++;
                        tevenCount--;
                    }
                    else{
                        toddCount--;
                        tevenCount++;
                    }
                }
            }
            if(toddCount%2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
            // cout << toddCount << " " << tevenCount << endl;
        }

    }

    return 0;
}