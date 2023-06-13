#include <iostream>
#include<string>
using namespace std;
int main()
{	
	string a, b;
	int a1,b1,count = 0, diff = 0;
	cin >> a >> b;
	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		int a1 = a[i];
		int b1 = b[i];
		if (a1 == b1 || a1 == (b1 + 32) || (a1 + 32) == b1)
			count++;
		else
		{
			if (a1 > 90 && b1 > 90)
				diff = a1 - b1;
			else if (a1 <= 90 && b1 <= 90)
				diff = a1 - b1;
			else if (a1 > 90 && b1 < 90)
				diff = (a1 - 32) - b1;
			else if (a1 < 90 && b1 > 90)
				diff = (a1) - (b1 - 32);
			break;
		}
	}
	if (count == size)
		cout << "0";
	else if (diff > 0)
		cout << "1";
	else if (diff < 0)
		cout << "-1";
	
	
	return 0;
}