#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> res(n);
    int maxxi = INT_MIN;
    int minni = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> res[i];
        if(res[i] > maxxi){
            maxxi = res[i];
        }
        if(res[i] < minni){
            minni = res[i];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(res[i] > minni && res[i] < maxxi){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}