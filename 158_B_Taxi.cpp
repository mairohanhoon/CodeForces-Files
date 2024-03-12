#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            count1++;
        }
        else if(arr[i] == 2) count2++;
        else if(arr[i] == 3) count3++;
        else count4++;
    }
    int count = 0;
    count += count4;
    int x = min(count1, count3);
    count += x;
    count1 -= x;
    count3 -= x;
    count += count2/2;
    count += count3;
    count += count1/4; 
    cout << count << endl;

    return 0;
}