#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int ans=1,n;
void dfs(int last)
{
	if(last<2)	return ;
	for(int i=1;i<=last/2;i++)
	{
		ans++;
		dfs(i);
	}
}
int main()
{
	scanf("%d",&n);
	dfs(n);
	printf("%d",ans);
	return 0;
}
