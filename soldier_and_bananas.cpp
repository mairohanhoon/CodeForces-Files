#include<iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    int i = 0;
    while(i!=w){
        i++;
        total = total + (i*k);
    }
    if(n>=total)
        cout << "0" << endl;
    else
        cout << total-n << endl;
}