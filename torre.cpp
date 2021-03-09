#include <iostream>
using namespace std;

int main()
{
	int n, t, a;
	cin>> n;
	t = 0;
	int m[n][n], vx[n], vy[n];

	for(int x = 0; x<n; x++){vx[x] = 0; vy[x] = 0;}

	for(int y = 0; y<n; y++)
	{
		for(int x = 0; x<n; x++)
		{
			cin>> m[y][x];
			vy[y] += m[y][x];
			vx[x] += m[y][x];
		}
	}

	for(int y = 0; y<n; y++)
	{
		for(int x = 0; x<n; x++)
		{
			a = vy[y] + vx[x] - 2*m[y][x];
			if(a > t){t = a;}
		}
	}

	cout<< t;
}