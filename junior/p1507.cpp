#include<cstdio>
#include<algorithm>
using namespace std;
const int V = 420;
int f[V][V];
int n,v,w;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&v,&w,&n);
	while(n--)
	{
		scanf("%d%d%d",&a,&b,&c);
		for(int i=v;i;i--)
			for(int j=w;j;j--)
				if(i-a>=0&&j-b>=0)	f[i][j]=max(f[i][j],f[i-a][j-b]+c);
	}
	printf("%d",f[v][w]);
	return 0;
}
