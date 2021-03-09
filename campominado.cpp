#include <iostream>
using namespace std;

int main()
{
	int n, c;
	cin>> n;
	c = 0;
	int v[n];

	for(int i = 0; i < n; i++)
	{
		cin>> v[i];

		if(i == 1)
		{
			if(v[i-1]==1){c++;}
			if(v[i]==1){c++;}

			cout<< c << "\n";
			c = 0;
		}

		else if(i>1)
		{
			if(v[i-2]==1){c++;}
			if(v[i-1]==1){c++;}
			if(v[i]==1){c++;}

			cout<< c << "\n";
			c = 0;
		}
	}
if(v[n-2]==1){c++;}
if(v[n-1]== 1){c++;}

cout<< c;
}