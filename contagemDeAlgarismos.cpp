#include <iostream>
using namespace std;

int main()
{
	string num;
	int n, v[10];
	cin>> n;
	for(int i = 0; i < 10; i++){v[i] = 0;}

	for(int i = 0; i<n; i++)
	{
		cin>> num;
		for(int q = 0; q<num.size(); q++)
		{
			for(int x = 48; x<68; x++) // 48 and 68 stand for 0 and 9 in ASCII
			{
				if(num[q] == x){v[x-48]++; break;}
			}
		}
	}

	for(int i = 0; i < 10; i++){cout<< i << " - " << v[i] << "\n";}
}