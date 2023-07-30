#include<iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int count = a;
    while(a>=b){
        count++;
        a = a-b+1;
    }
    cout << count << endl;

    return 0;
}