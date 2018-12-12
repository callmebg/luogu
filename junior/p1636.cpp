#include<cstdio>
using namespace std;
const int N = 1024,M = 100008;
int n,m,du[N],ans=0;
int main()
{
	int i,a,b;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
		scanf("%d%d",&a,&b),du[a]++,du[b]++;
	for(i=1;i<=n;i++)
		if(du[i]&1)	ans++;
	if(ans)	printf("%d",ans/2);	//ÆæµãÊý 
	else	printf("1");
	return 0;
}
