#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[3];
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    sort(a, a+3);
    int sum = 0;
    int count = 0;

    while(sum<=n){
        for(int i=0; i<3; i++){
            sum+=a[i];
            if(sum<=n){
                count++;
            }
            else{
                break;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}