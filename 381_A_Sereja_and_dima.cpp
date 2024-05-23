#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x = 0;
    int y = 0;
    int i = 0, j = n-1;
    bool flag = true;   
    while(i <= j){
        if(flag){
            if(a[i] > a[j]){
                x += a[i];
                i++;
            }
            else{
                x += a[j];
                j--;
            }
            flag = false;
        }
        else{
            if(a[i] > a[j]){
                y += a[i];
                i++;
            }
            else{
                y += a[j];
                j--;
            }
            flag = true;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}