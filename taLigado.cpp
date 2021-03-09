#include<bits/stdc++.h>
using namespace std;

int n,q,a,b,t,c;
vector<int> v[100005];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>> n >> q;
	for(int i=0;i<q;i++)
	{
		cin>> t >> a >> b;

		if(t)
		{
			v[a].push_back(b);
			v[b].push_back(a);
		}
		else
		{
			for(int j=0; j<(int)v[a].size() && c==0;j++)
			{
				if(v[a][j] == b) c=1;
			}
			cout<< c << "\n";
			c=0;
		}
	}

}