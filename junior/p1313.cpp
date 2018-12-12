#include<cstdio>
using namespace std;
typedef long long ll;
const int mod = 10007;
ll a,b,k,n,m;
ll f[1008][1008];
ll km(ll a,ll b)
{
	 ll t=1;
	 while(b!=0)
	 {
	 	if(b&1==1)	t=t*a%mod;
	 	a=a*a%mod;
	 	b>>=1;
	 }
	 return t;
}
int main()
{
	int i,j;
	scanf("%d%d%d%d%d",&a,&b,&k,&n,&m);
	for(i=0;i<=k;i++)	f[i][i]=f[i][0]=1;
	for(i=2;i<=k;i++)
		for(j=1;j<=k;j++)
			f[i][j]=(f[i-1][j]+f[i-1][j-1])%mod;
	printf("%lld",f[k][n]*km(a,n)*km(b,m)%mod);
			
	return 0;
} 
