#include<bits/stdc++.h>
using namespace std;

int n,a,b,c,ed;
pair<int,int> h[10000];

bool fonk(pair<int,int>a,pair<int,int>b)
{
	if(a.second!=b.second) return a.second < b.second;
	return a.first < b.first;
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>> n;

	for(int i=0;i<n;i++)
	{
		cin>> a >> b;
		h[i] = make_pair(a,b);
	}

	sort(h,h+n,fonk);

	for(int i=0;i<n;i++)
	{
		if(h[i].first >= ed)
		{
			ed = h[i].second;
			c++;
		}
	}

	cout<< c;
	return 0;
}