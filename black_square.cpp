#include<iostream>
using namespace std;

int main(){

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string a;
    cin >> a;

    int sum = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == '1'){
            sum += a1;
        }
        else if(a[i] == '2'){
            sum += a2;
        }
        else if(a[i] == '3'){
            sum += a3;
        }
        else if(a[i] == '4'){
            sum += a4;
        }
    }
    cout << sum << endl;

    return 0;
}