#include<cstdio>
#include<algorithm>
using namespace std;
const int V = 250;
int f[V][V];
int n,m,t;
int main()
{
	int mi,ti;
	scanf("%d%d%d",&n,&m,&t);
	while(n--)
	{
		scanf("%d%d",&mi,&ti);
		for(int i=m;i>=mi;i--)
			for(int j=t;j>=ti;j--)
				f[i][j]=max(f[i][j],f[i-mi][j-ti]+1);
	}
	printf("%d",f[m][t]);
	return 0;
	
}
