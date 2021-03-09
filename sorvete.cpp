#include<bits/stdc++.h>
using namespace std;

int n,l,a,b,start,ed,j;
pair<int,int>v[5005];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>> l >> n;

	for(int i=0;i<n;i++)
	{
		cin>> a >> b;
		v[i] = make_pair(a,b);
	}

	sort(v, v+n);

	while(j<n)
	{
		start = v[j].first;
		cout<< start << " ";
		ed = v[j].second;
		
		for(j=j+1; v[j].first <= ed && j<n; j++) if(v[j].second > ed) ed = v[j].second;
		
		cout<< ed << "\n";
	}
}