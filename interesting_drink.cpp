#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int x;
    cin >> x;
    while(x--){
        cin >> temp;
        int count = 0;
        for(int i=0; i<n; i++){
            if(temp >= arr[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
