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
        }
        sort(v.begin(), v.end());
        int count = 0;
        int i=0, j=n-1;
        while(i <= j){
            count += v[j] - v[i];
            i++;
            j--;
        }
        cout << count << endl;
    }

    return 0;
}