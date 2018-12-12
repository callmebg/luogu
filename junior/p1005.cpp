#include<cstdio>
#include<string.h>
using namespace std;
const int MAX = 80;
typedef long long ll;
#define k m-(r-l)
ll ans=0,n,m;
ll f[MAX][MAX],num[MAX],p[MAX];
ll max(ll a,ll b)
{
	return a>b?a:b;
}
ll dp(int l,int r)
{
	if(f[l][r]!=-1)	return f[l][r];
	if(r-l>=1)f[l][r]=max(num[l]*p[k]+dp(l+1,r),num[r]*p[k]+dp(l,r-1));
	else		f[l][r]=num[l]*p[k];
	return f[l][r];
}
int main()
{
	int a,b;
	scanf("%lld%lld",&n,&m);
	p[0]=1;
    for(int i=1;i<=m;i++) p[i]=p[i-1]*2;
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=m;b++)	scanf("%lld",&num[b]);
		memset(f,-1,sizeof(f));
		ans+=dp(1,m);
		/*for(int aa=1;aa<=m;aa++)
			for(int bb=aa;bb<=m;bb++)
				printf("%lld\n",f[aa][bb]);*/
			
	}
	printf("%lld",ans);
	return 0;
}
