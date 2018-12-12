/*#include<cstdio>
#include<string.h>
using namespace std;
int n,s[1000008],k;
bool op[1000008];
int main()					//baoli
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for(k=n;;k++)
	{
		memset(op,0,sizeof(op));
		for(i=1;i<=n;i++)
		if(op[s[i]%k])	break;
		else	op[s[i]%k]=true;
		if(i==n+1)	
		{
			printf("%d",k);
			return 0;
		}
	}
	return 0;
}*/
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
bool vis[1000008],op[1000008];
int s[1000008],n,k;
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	scanf("%d",&s[i]);
	for(i=1;i<n;i++)
		for(j=1;j<=n;j++)
			if(s[j]>s[i])	vis[s[j]-s[i]]=true;
			else			vis[s[i]-s[j]]=true;
	for(k=n;;k++)
	{
		if(vis[k])	continue;
		memset(op,0,sizeof(op));
		for(i=1;i<=n;i++)
		if(op[s[i]%k])	break;
		else	op[s[i]%k]=true;
		if(i==n+1)	
		{
			printf("%d",k);
			return 0;
		}
	}
	return 0;
}

