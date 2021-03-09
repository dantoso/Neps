#include<bits/stdc++.h>
using namespace std;

int n,np,s,k,t,sys[105],gp;

struct chal
{int id,place[105],score = 0;};

chal v[105];

bool idk(chal a, chal b)
{
	if(a.score != b.score) return a.score > b.score;
	return a.id < b.id;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    while(cin>> n >> np &&(n+np))
    {
    	for(int i = 0;i<np;i++) v[i].id = i+1;// setando o id d cada corredor

    	for(int i = 0;i<n;i++)//pra cada corrida
    	{
    		for(int j = 0;j<np;j++)// pra cada corredor
    		{
    			//receber posiçoes
    			cin>> gp;
    			v[j].place[i] = gp-1;
    		}
    	}

    	cin>> s;

    	for(int i = 0;i<s;i++)//pra cada sistema
    	{
    		memset(sys,0,sizeof(sys));// resetando sistema
    		cin>> k;
    		for(int j = 0;j<k;j++) cin>> sys[j]; // receber sistema

    		for(int j = 0;j<np;j++)//pra cada corredor
    		{
    			for(int q = 0;q<n;q++)//pra cada corrida
    			{
    				//pontuar cada corredor de acordo com a sua posiçao
    				t = v[j].place[q];
    				v[j].score += sys[t];
    			}
    		}

    		sort(v, v+np, idk); // ai tem esse sort aq

    		for(int j = 0;j<np;j++)// pra cada corredor
    		{
    			if(v[j].score == v[0].score) cout<< v[j].id << " "; //printar primeiro lugar
    			else break;
    		}

    		cout<< "\n"; // quebra pq sim

    		for(int j = 0;j<105;j++) v[j].score = 0; //resetando pontos pro proximo sistema
    	}
    }
}