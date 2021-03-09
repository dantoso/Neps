#include <iostream>
using namespace std;

int main()
{
	int l, q, k, i, d;
	cin>> l;
	int m[l][l];
	q = 0;
	d = 0;
	k = -1;
	i = 0;
	for(int y = 0; y<l; y++)
	{
		for(int x = 0; x<l; x++)
		{
			cin>> m[y][x];
			q+= m[y][x];
			if(x == l-1)
			{
				if(k == -1){k = q; q = 0;}
				else
				{
					if(q == k){q = 0;}
					else{i = 1; break;}
				}

			}
		}
		if(i == 1){break;}
	}

	for(int x = 0; x<l; x++)
	{
		if(i == 1)
			{break;}

		for(int y = 0; y<l; y++)
		{
			q+= m[y][x];
			if(y == l-1)
			{
				if(q == k){q = 0;}
				else{i = 1; break;}
			}
		}
	}

	for(int y = 0; y<l; y++)
	{
		if(i == 1)
			{break;}

		for(int x = 0; x<l; x++)
		{
			if(x == y){q+= m[y][x];}
			if(x + y == l-1){d+= m[y][x];}
		}

		if(y == l-1)
		{
			if(q == d and q == k){q = 0; d = 0;}
			else{i = 1;}
		}
	}

	if(i == 1){cout<< -1;}
	else{cout<< k;}
}