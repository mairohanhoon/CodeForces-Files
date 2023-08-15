#include<iostream>
using namespace std;

int main(){

    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int cost = 0;
    if(m*a > b){
        if(m>n){
            if(n*a> b){
                cost = b;
            }
            else{
                cost = n*a;
            }
        }
        else{
            if(n%m == 0){
                if((n/m)*b > a*n){
                    cost = a*n;
                }
                else{
                    cost = (n/m)*b;
                }
            }
            else{
                cost = (n/m)*b;
                if((n%m)*a > b){
                    cost+=b;
                }
                else{
                    cost += (n%m)*a;
                }
            }
        }
    }
    else{
        cost = n*a;
    }
    cout << cost << endl;

    return 0;
}