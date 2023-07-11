#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int count = 0;
        while(n>=100){
            count++;
            n -= 100;
        }
        while(n>=20){
            n -= 20;
            count++;
        }
        while(n>=10){
            n -= 10;
            count++;
        }
        while(n>=5){
            n -= 5;
            count++;
        }
        while(n>=1){
            n -= 1;
            count++;
        }
        cout << count << endl;

    return 0;
}