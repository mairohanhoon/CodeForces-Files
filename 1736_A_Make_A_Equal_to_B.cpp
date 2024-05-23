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
        for(int i=0 ;i<n; i++)
            cin >> a[i];
        for(int i=0 ;i<n; i++)
            cin >> b[i];
        int count1 = 0;
        int count2 = 0;
        int diff = 0;
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                diff++;
            }
            if(a[i] == 1)
                count1++;
            if(b[i] == 1)
                count2++;
        }
        if(diff == 0) cout << 0 << endl;
        else if(count1 == count2) cout << 1 << endl;
        else{
            int temp = abs(count1-count2);
            cout << min(temp + 1, diff) << endl;
        }
    }

    return 0;
}