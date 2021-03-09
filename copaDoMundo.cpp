#include<bits/stdc++.h>
using namespace std;

queue<char> eq;
int scr1,scr2;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for(int i=0;i<16;i++) eq.push(65+i);

	for(int i=0;i<15;i++)
	{
		cin>> scr1 >> scr2;
		if(scr1 > scr2) {eq.push(eq.front()); eq.pop();}
		else {eq.pop(); eq.push(eq.front());}
		eq.pop();
	}

	cout<< eq.front();
}