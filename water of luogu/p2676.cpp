#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,b,h[20006];
int main()
{
	ll a,th=0;
	scanf("%lld%lld",&n,&b);
	for(a=0;a<n;a++)	scanf("%lld",&h[a]);
	sort(h,h+n);
	for(a=n-1;a>=0;a--)
	{
		th+=h[a];
		if(th>b)
		{
			printf("%lld",n-a);
			return 0;
		}
	}
		
	return 0;
}
