#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 5000;
ll ans=0,n,yyn[MAX],yyk[MAX],t=1000000,ti;
int main()
{
	ll t=1,i,k;
	scanf("%lld%lld",&n,&k);
	for(ll a=2,b=k;b!=1;a++)
		while(b%a==0)
			yyk[a]++,b/=a;
	for(i=2;i<=n;i++)
		for(ll a=2,b=i;b!=1;a++)
		while(b%a==0)
			yyn[a]++,b/=a;
	for(i=2;i<MAX;i++)
		if(yyn[i]!=0&&yyk[i]!=0)	t=min(t,yyn[i]/yyk[i]);	
	printf("%lld",t+1);
	return 0;
}
