#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin >> s;

    int siz = s.size();
    int count_big = 0;
    

    if(siz > 1){

        for(int i=1; i<siz; i++){
            if(s[i] <= 90){
                count_big++;
            }
        }

        if(count_big==siz-1 && s[0] > 90){
            if(s[0] > 90){
                s[0] = s[0] - 32;
            }
            for(int i=1; i<siz; i++){
                if(s[i] <= 90){
                    s[i] = s[i] + 32;
                }
            }
            
        }
        else if(count_big == siz-1 && s[0] <= 90){
            for(int i=0; i<siz; i++){
                if(s[i] <= 90){
                    s[i] = s[i] + 32;
                }
            }
        }
    }
    else{
        if(s[0] > 90){
            s[0] = s[0] - 32;
        }
        else{
            s[0] = s[0]+32;
        }
    }
    cout << s << endl;

    return 0;
}