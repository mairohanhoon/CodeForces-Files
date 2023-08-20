#include<bits/stdc++.h>

using namespace std;

int main(){

    int A[4];
    for(int i=0; i<4; i++){
        cin >> A[i];
    }
    sort(A, A+4);
    int count = 0;
    int i=0;
    int x=1;
    while(i<4){
        if(A[i] == A[i+1]){
            x=1;
            while(A[i] == A[i+x]){
                x++;
            }
            count++;
            i+=x;
        }
        else{
            count++;
            i++;
        }
    }
    cout << 4-count << endl;

    return 0;
}