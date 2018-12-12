#include<cstdio>
using namespace std;
const int MAX = 100000008;
bool vis[MAX];
int prime[MAX],cnt;
void m_prime(int n)
{
	int i,j;
	cnt=0;
	vis[1]=true;
	for(i=2;i<n;i++)
	{
		if(!vis[i])	prime[++cnt]=i;
		for(j=1;j<=cnt&&i*prime[j]<=n;j++)
		{
			vis[i*prime[j]]=true;
			if(i%prime[j]==0)	break;
		}
	}
}
int main()
{
	int n,m,t;
	scanf("%d%d",&n,&m);
	m_prime(n);
	while(m--)
	{
		scanf("%d",&t);
		if(vis[t])	printf("No\n");
		else		printf("Yes\n");
	}
	return 0;
}
