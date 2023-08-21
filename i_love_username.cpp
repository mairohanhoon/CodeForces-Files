#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 0;
    int best = a[0];
    int worst = a[0];
    if(n <= 1){
        cout << count << endl;
    }
    else{
        for(int i=1; i<n; i++){
            if(a[i] > best){
                best = a[i];
                count++;
            }
            else if(a[i] < worst){
                worst = a[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}