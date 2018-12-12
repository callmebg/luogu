#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;
const int mod = 10007;
int n,ans;
int km(int a,int b,int mod)
{
	int t=1;
	while(b)
	{
		if(b&1)	t=t*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return t;
}
int main()
{
	int t;
	scanf("%d%d",&n,&ans);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&t);
		ans=km(ans,t,mod);
	}
	cout<<ans;
	return 0;
}
