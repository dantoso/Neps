#include<bits/stdc++.h>
using namespace std;

int n,t,scr,k;
string var;
vector<pair<int,string>> sla;
vector<string> v;

bool idk2(string a, string b)
{
	return a>b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>> n >> t;

	for(int i=0;i<n;i++)
	{
		cin>> var >> scr;
		sla.push_back(make_pair(scr, var));
	}

	sort(sla.begin(), sla.end()); // ordem de pontos

	for(int i=0;i<t;i++)
	{
		cout<< "Time "<< i+1 << "\n";

		for(int j=(int)sla.size()-1; j>-1; j-=t-i)
		{	
			v.push_back(sla[j].second);
			sla.erase(sla.begin()+j);
		}

		sort(v.begin(), v.end(), idk2); // ordem alfabetica

		for(int j=(int)v.size()-1; j>-1; j--)
		{
			cout<< v[j] << "\n";
			v.pop_back();
		}
		cout<< "\n";
	}
}