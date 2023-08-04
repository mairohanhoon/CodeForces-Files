#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 1;
    int maxx = 0;
    if(n == 1){
        cout << "1" << endl;
    }
    else{
        for(int i=0; i<n-1; i++){
            if(a[i] <= a[i+1]){
                count++;
            }
            else{
                count = 1;
            }

            if(maxx < count){
                maxx = count;
            }
        }
        cout << maxx << endl;
    }

    return 0;
}