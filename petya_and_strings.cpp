#include <iostream>
#include<string>
using namespace std;
int main()
{	
	string a, b;
	int a1,b1,count = 0, diff = 0;
	cin >> a >> b;
	for(int i=0; i<a.size(); i++){
		if(a[i] <'a'){
			a[i] += 32;
		}
	}
	for(int i=0; i<b.size(); i++){
		if(b[i] <'a'){
			b[i] += 32;
		}
	}

	int check = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i] < b[i]){
			cout << "-1" << endl;
			check = 1;
			break;
		}
		else if(a[i] > b[i]){
			cout << "1" << endl;
			check = 1;
			break;
		}
	}
	if(check == 0){
		cout << "0" << endl;
	}

	return 0;
}