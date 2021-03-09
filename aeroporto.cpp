#include<bits/stdc++.h>
using namespace std;

int n,p,k,c;

struct porto{int id, scr = 0;};
porto v[105];

bool fdp(porto a, porto b)
{
	if(a.scr != b.scr) return a.scr > b.scr;
	return a.id < b.id;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin>> p >> n &&(n+p))
	{
		c++;

		for(int i=0;i<p;i++) v[i].id = i+1;

		for(int i=0;i<n;i++)
		{
			cin>> k;
			v[k-1].scr++;
			cin>> k;
			v[k-1].scr++;
		}

		sort(v, v+p, fdp);

		cout<< "Teste " << c << "\n";

		for(int i=0; v[i].scr == v[0].scr ;i++)
		{
			cout<< v[i].id << " ";
		}

		cout<< "\n";

		for(int i=0;i<p+1;i++)
		{
			v[i].scr = 0;
		}
	}
}