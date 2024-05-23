#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > b) swap(a, b);
        if(c > d) swap(c, d);
        vector<int> arr = {a, b, c, d};
        sort(arr.begin(), arr.end());
        if(arr[0] == a && arr[1] == b && arr[2] == c && arr[3] == d)
            cout << "NO" << endl;
        else if(arr[0] == a && arr[1] == c && arr[2] == d && arr[3] == b)
            cout << "NO" << endl;
        else if(arr[0] == c && arr[1] == a && arr[2] == b && arr[3] == d)
            cout << "NO" << endl;
        else if(arr[0] == c && arr[1] == d && arr[2] == a && arr[3] == b)
            cout << "NO" << endl;
        else    
            cout << "YES" << endl;
    }

    return 0;
}