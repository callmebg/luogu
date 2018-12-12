#include<cstdio>
#include<algorithm>
using namespace std;
const int N=5006,M=200006;
struct edge
{
	int f,t,d;
}ed[M];
int n,m,ans=0,now=0;
int f[N];
bool com(edge a,edge b)
{
	return a.d<b.d;
}
int getf(int t)
{
	return f[t]=f[t]==t?t:getf(f[t]);
}
void kruskal()
{
	int i;
	for(i=1;i<=n;i++)	f[i]=i;
	sort(ed+1,ed+m+1,com);
	for(i=1;i<=m;i++)
	{
		if(getf(ed[i].f)!=getf(ed[i].t))
		{
			now++;
			f[getf(ed[i].f)]=f[ed[i].t];
			ans+=ed[i].d;
		}
		if(now==n-1)	break;
	}
}
int main()
{
	int i;
	scanf("%d%d",&n,&m);	
	for(i=1;i<=m;i++)
		scanf("%d%d%d",&ed[i].f,&ed[i].t,&ed[i].d);
	kruskal();
	if(now!=n-1)	printf("orz");
	else			printf("%d",ans);
	return 0;
}
