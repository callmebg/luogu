#include<cstdio>
#include<iostream>
using namespace std;
long long ans=0;
int n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		ans+=n/i;
	cout<<ans;
	return 0;
}
