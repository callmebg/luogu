#include<cstdio>
using namespace std;
int n,m,s[3008],ans=99999999;
int main()
{
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&s[i]),s[i]+=s[i-1];
	for(i=0;i+m<=n;i++)
		if(ans>s[i+m]-s[i])	ans=s[i+m]-s[i];
	printf("%d",ans);
	return 0;
}
