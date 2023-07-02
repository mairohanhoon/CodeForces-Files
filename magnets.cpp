#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    int n;
    int count = 1;

    char mag[100000][2] ;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> mag[i][0];
        cin >> mag[i][1];
    }
    int maxmag = 1;
    for(int i=0; i<n-1; i++){
        if(mag[i][0] == '1' && mag[i+1][0] == '1' && mag[i][1] == '0' && mag[i+1][1] == '0'){
        }
        else if(mag[i][0] == '0' && mag[i+1][0] == '0' && mag[i][1] == '1' && mag[i+1][1] == '1'){
        }
        else{
            maxmag++;
        }
    }
    cout << maxmag << endl;

    return 0;
}