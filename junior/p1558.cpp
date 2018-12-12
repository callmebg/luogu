#include<cstdio>
using namespace std;
int f[18][18];
bool ncan[18][18];
int a,b,n;
int main()
{
	int i,j;
	scanf("%d%d%d",&a,&b,&n);
	while(n--)
	{
		scanf("%d%d",&i,&j);
		ncan[i][j]=1;
	}
	f[1][1]=1;	
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++)
			if(!ncan[i][j])	f[i][j]+=f[i-1][j]+f[i][j-1];
			
				
	/*for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)	printf("%d ",f[i][j]);
		printf("\n");
	}*/
			
			
	printf("%d",f[a][b]);
	return 0;
}
