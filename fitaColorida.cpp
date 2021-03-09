#include <iostream>
using namespace std;

int main()
{
	int n, c, q, k, pz, m;
	cin>> n;
	c = 0;
	k = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin>> q;
		if(q == 0)
		{
			pz = i;
			if(k == 0)
			{
				for(int j = 0; j<c; j++)
				{
					if(c-j < 9){cout<< c-j << " ";}
					else{cout<< 9 << " ";}
				}
				cout<< 0 << " ";
			}
			else if(k>0)
			{
				m = c/2;
				for(int j = 0; j<c; j++)
				{
					if(j<m)
					{
						if(j+1 < 9){cout<< j+1 << " ";}
						else{cout<< 9 << " ";}
					}
					else if(j == m and c%2 == 0)
					{
						if(m<9){cout<< m << " ";} 
						else{cout<< 9 << " ";} 
					}
					else
					{
						if(c-j < 9){cout<< c-j << " ";}
						else{cout<< 9 << " ";}
					}
				}
				cout<< 0 << " ";
			}

			k++;
			c = 0;
		}
		else{c++;}
	}

	if(pz != n-1)
	{
		for(int j = 0; j<c; j++)
		{
			if(j+1 < 9){cout<< j+1 << " ";}
			else{cout<< 9 << " ";}
		}
	}
}