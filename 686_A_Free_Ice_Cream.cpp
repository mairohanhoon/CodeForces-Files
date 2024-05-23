#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, x;
    cin >> n >> x;
    long long count = 0;
    vector<pair<char, long long>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
        if(a[i].first == '+'){
            x += a[i].second;
        }
        else{
            if(x >= a[i].second){
                x -= a[i].second;
            }
            else{
                count++;
            }
        }
    }
    cout << x << " " << count << endl;

    return 0;
}