#include<cstdio>
using namespace std;
bool cb[3008][3008];
int n,m,k,ans=0;
int x,y;
int	mx[]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2},
	my[]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
void light(bool c,int x,int y)
{
	int a,b;
	if(c)
	{
		for(a=0;a<=12;a++)
			if(x+mx[a]>=1&&x+mx[a]<=n&&y+my[a]>=1&&y+my[a]<=n)
				cb[x+mx[a]][y+my[a]]=true;
	}
	else
	{
		for(a=x-2;a<=x+2;a++)
			for(b=y-2;b<=y+2;b++)
				if(a>=1&&a<=n&&b>=1&&b<=n)
					cb[a][b]=true;
	}
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&n,&m,&k);
	for(a=0;a<m;a++)
		scanf("%d%d",&x,&y),light(true,x,y);
	for(a=0;a<k;a++)
		scanf("%d%d",&x,&y),light(false,x,y);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n;b++)
			if(!cb[a][b])	ans++;
	}
	printf("%d",ans);
	return 0;
}
