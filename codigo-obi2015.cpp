#include <iostream>
using namespace std;

int main()
{ 
	int n, c, ansr;
	cin >> n;
	c = 0;
	ansr = 0;
	int v[n];

	for(int i=0; i < n; i++)
	{
		cin >> v[i];
		if(v[i] == 0 and c == 2)
			{ansr++; c = 0;}
		else if(v[i] == 0 and c == 1)
			{c++;}
		else if(v[i] == 1)
			{
				if(c == 0)
					{c++;}
				else
					{c = 1;}
			}
		else
			{c = 0;}
	} 

	cout<< ansr;
}