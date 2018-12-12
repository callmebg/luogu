#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int p[100000008],n,d;
ll ans=0;
int main()
{
	int i,j;
	scanf("%d%d",&n,&d);
	for(i=1;i<=n;i++)	scanf("%d",&p[i]);
	sort(p+1,p+1+n);
	for(i=1;i<n;i++)
		for(j=i+1;p[j]-p[i]<=d&&j<=n;j++)	ans++;
	cout<<ans;
	return 0;
}
