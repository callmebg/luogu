#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N =1008;
int prime[N],cnt=0,n;
bool vis[N];
ll f[N];
ll ans=0;
void m_prime(int n)
{
	vis[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(!vis[i])	prime[++cnt]=i;
		for(int j=1;j<=cnt&&i*prime[j]<=n;j++)
		{
			vis[i*prime[j]]=1;
			if(i%prime[j]==0)	break;
		}
	}
}
/*void dfs(int x,int t)
{
	if(t==0)	ans++;
	for(int i=x;i<=t;i++)
		if(!vis[i])	dfs(i,t-i);
}*/
int main()
{
	scanf("%d",&n);
	m_prime(n);
	//dfs(2,n);
	f[0]=1;
	for(int i=1;i<=cnt;i++)
			for(int j=prime[i];j<=n;j++)
					f[j]+=f[j-prime[i]];
					
	//for(int i=0;i<=7;i++)	printf("%d ",f[i]);				
	cout<<f[n];
	return 0;
}
