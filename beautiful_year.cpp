#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int conditon = 1;
    int x = n;
    while(conditon != 0){
        n++;
        x = n;
        int a = x%10;
        x = x/10;
        int b = x%10;
        x= x/10;
        int c = x%10;
        x= x/10;
        int d = x%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            conditon = 0;
        }
    }
    cout << n << endl;

    return 0;
}