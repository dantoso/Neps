#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

struct pais
{
	int o, p, b, id;
};

bool par(pais a, pais b)
{
	if(a.o != b.o){return a.o > b.o;}
	if(a.p != b.p){return a.p > b.p;}
	if(a.b != b.b){return a.b > b.b;}
	return a.id > b.id;
}

int main()
{
	int r;
	cin>> n;
	cin>> m;
	pais v[n];

	for(int i = 0; i<n; i++)
	{
		v[i].o = 0;
		v[i].p = 0;
		v[i].b = 0;
		v[i].id = i+1;
	}

	for(int i = 0; i<m; i++)
	{
		cin>> r;
		v[r-1].o++;
		
		cin>> r;
		v[r-1].p++;

		cin>> r;
		v[r-1].b++;
	}

	sort(v, v+n, par);

	for(int i = 0; i<n; i++)
	{
		cout<< v[i].id << " ";
	}
}