#include<bits/stdc++.h>
using namespace std;

int n,k,a;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	cin>> n;

	for(int i=0;i<n;i++)
	{
		cin>> a;
		v.push_back(a);
	}

	cin>> k;

	for(int i=0;i<k;i++)
	{
		cin>> a;
		for(int j=0;j<v.size();j++)
		{
			if(v[j]==a)
			{
				v.erase(v.begin()+j);
				break;
			}
		}
	}

	for(int i=0;i<v.size();i++)
	{
		cout<< v[i] << " ";
	}
}