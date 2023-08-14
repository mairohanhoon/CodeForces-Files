#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    while(n!=0){
        if(n%2==0){
            sum += n;
        }
        else{
            sum -= n;
        }
        n--;
    }
    cout << sum << endl;
    return 0;
} 
