#include<iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    int count1 = 0;
    int count2 = 0;
    int a, b;
    while(t--){
        cin >> a >> b;
        if(a > b){
            count1++;
        }
        else if(b > a){
            count2++;
        }
    }
    if(count1 > count2){
        cout << "Mishka" << endl;
    }
    else if(count2 > count1){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}