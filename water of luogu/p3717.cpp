#include<cstdio>
using namespace std;
int n,m,r,cb[108][108],x,y,ans=0;
int main()
{
	int a,b;
	scanf("%d%d%d",&n,&m,&r);
	while(m--)
	{
		scanf("%d%d",&x,&y);
		for(a=1;a<=n;a++)
			for(b=1;b<=n;b++)
				if((a-x)*(a-x)+(b-y)*(b-y)<=r*r)	cb[a][b]=1;
	}
	for(a=1;a<=n;a++)
		for(b=1;b<=n;b++)
			if(cb[a][b])	ans++;
	printf("%d",ans);
	return 0;
}
