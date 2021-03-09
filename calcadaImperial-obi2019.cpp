#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, a;
	cin>> n;
	int v[n], c[n+1];

	for(int i = 0; i<n; i++)
	{
		cin>> v[i];
		c[i] = 0;
	}

	for(int i=0; i<n; i++)
	{
		a = v[i];
		if(c[a]!=0){continue;}

		for(int j=0; j<n; j++)
		{
			if(v[j] == v[i] and (i>j+1 or 1+i<j))
				{c[a]++;}
		}
	}

	sort(c, c+n);
	cout<< c[n+1]+c[n];

	return 0;
}