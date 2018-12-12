#include<cstdio>
#include<algorithm>
using namespace std;
const int N=100008;
int n,m,ans=0;
int f[N];
int getf(int t)
{
	return f[t]=f[t]==t?t:getf(f[t]);
}	
int main()
{
	int i,x,y;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)	f[i]=i;	
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&x,&y);
		if(getf(x)!=getf(y))	f[getf(x)]=f[y];
	}
	for(i=1;i<=n;i++)	if(f[i]==i)	ans++;
	printf("%d",ans);
	return 0;
}
