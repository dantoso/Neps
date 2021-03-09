#include<bits/stdc++.h>
using namespace std;

int y,x,q,c;
char m[1005][1005];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>> y >> x;

	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++) cin>> m[i][j];
	}

	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			if(m[i][j] == '#')
			{
				for(int k=0;k<4;k++)
				{
					if(k==0){
						if(m[i-1][j]!='#')
							{c++; k=4;}
					}
					else if(k==1){
						if(m[i][j+1]!='#')
							{c++; k=4;}
					}
					else if(k==2){
						if(m[i+1][j]!='#')
							{c++; k=4;}
					}
					else if(k==3){
						if(m[i][j-1]!='#')
							{c++; k=4;}
					}
				}
			}
		}
	}

	cout<< c;
}