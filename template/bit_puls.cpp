#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define lowbit(i) (i&-i)
typedef long long ll;
using namespace std;
const int N = 500005;
int n,m;
ll sum[N];
ll delta[N],deltai[N];
ll query(ll *p,int pos)
{
	ll ans=0;
	while(pos>0)
	{
		ans+=p[pos];
		pos-=lowbit(pos);
	}
	return ans;
}
void updata(ll *p,int pos,int x)
{
	while(pos<=n)
	{
		p[pos]+=x;
		pos+=lowbit(pos);
	}
}
int main()
{
	int i,l,r,v;
	ll hhh;
	int s1,s2;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%lld",&hhh),sum[i]=sum[i-1]+hhh;
	while(m--)
	{
		scanf("%lld",&hhh);
		if(hhh==1)
		{
			scanf("%d%d%d",&l,&r,&v);
			updata(delta,l,v);
			updata(delta,r+1,-v);
			updata(deltai,l,v*l);
			updata(deltai,r+1,-v*(r+1));
		}
		else
		{
			scanf("%d%d",&l,&r);
			s1=sum[l-1]+l*query(delta,l-1)-query(deltai,l-1);
			s2=sum[r]+(r+1)*query(delta,r)-query(deltai,r);
			printf("%lld\n",s2-s1);
		}
	}
	return 0;
}
