#include <iostream>
using namespace std;

int han(int n)
{
	if(n==1){return 1;}
	return 2*han(n-1) + 1;
}

int main()
{
	int x, a;
	a = 1;
	while (cin>> x &&(x!=0))
	{
		cout<< "Teste " << a << "\n" << han(x) << "\n";
		a++;
	}
}