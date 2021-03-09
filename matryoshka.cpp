#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, c;
	cin>> n;
	int v[n], s[n], a[n];
	c = 0;

	for(int i = 0; i<n; i++){cin>> s[i]; v[i] = s[i];}
	sort(s, s+n);
	
	for(int i = 0; i<n; i++)
	{
		if(v[i] != s[i])
		{
			a[c] = s[i];
			c++;
		}

	}

	cout<< c << "\n";
	for(int i = 0; i<c; i++)
	{
		cout<< a[i] << " ";
	}
}