#include<cstdio>
using namespace std;
const int MAX = 99999999;
int hhh[]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
bool vis[MAX];
int cnt=0,prime[MAX];
void m_prime()
{
	int i,j;
	vis[0]=vis[1]=true;
	for(i=2;i<MAX;i++)
	{
		if(!vis[i])	prime[++cnt]=i;
		for(j=1;j<=cnt&&i*prime[j]<=MAX;j++)
		{
			vis[i*prime[j]]=true;
			if(i%prime[j]==0)	break;
		}
		
	}
}
bool is_prime(int x)
{
	int i;
	if(x<2)	return false;
	for(i=2;i*i<=x;i++)
		if(x%i==0)	return false;
	return true;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	/*for(i=hhh[n-1];i<hhh[n];i++)
		if(can(i))	printf("%d\n",i);*/
	for(i=1;i<50000;i++)	printf("%d ",prime[i]);
	return 0;
}
