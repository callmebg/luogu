#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10008,M = 108;
const int mod = 20123;
bool can[N][M];
int	to[N][M];
int n,m,f,ans=0;
int main()
{
	/*int i,j,t,l,up;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d%d",&can[i][j],&to[i][j]);
	scanf("%d",&f);
	l=to[1][f+1];	
	up=f+1;
	for(i=1;i<=n;i++)
	{
		ans=(ans+l)%mod;
		//printf("%d\n",ans);
		t=0;	
		for(j=up;;)
		{
			if(j==m+1)	j=1;
			if(can[i][j])	t++;			
			if(t==l)	break;	
			j++;				
		}
		l=to[i+1][j];
		up=(i+1)*m+j;
	}
	printf("%d",ans);*/
	printf("dfag");
	main();
	return 0;
}
