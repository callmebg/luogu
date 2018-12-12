#include<cstdio>
#include<algorithm>
using namespace std;
const int V = 250;
int f[V][V];
int n,v,w;
int main()
{
	int a,b,c;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			scanf("%d",&f[i][j]);
	for(a=2;a<n;a++)
		for(b=1;b<a;b++)
			for(c=a;c<=n;c++)
				f[b][c]=min(f[b][c],f[b][a]+f[a][c]);
	printf("%d",f[1][n]);
	return 0;
}
