#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll ans=0,tans;
int n,s;
ll c[10086];
int main()
{
	int y;
	scanf("%d%d",&n,&s);
	cin>>c[1]>>y;
	ans+=c[1]*y;
	for(int i=2;i<=n;i++)
	{
		cin>>c[i]>>y;
		tans=c[i]*y;
		for(int j=1;j<i;j++)
			if(y*(c[j]+s*(i-j))<tans)	tans=y*(c[j]+s*(i-j));
		ans+=tans;
	}
	cout<<ans;
	return 0;
}
