#include<cstdio>
using namespace std;
bool cb[250][250];
int ans=0;
int x,y,i;
int x1,y1,x2,y2;
int main()
{
	int a,b;
	scanf("%d%d%d",&x,&y,&i);
	while(i--)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for(a=x1;a<=x2;a++)
			for(b=y1;b<=y2;b++)
				cb[a][b]=true;
	}
	for(a=1;a<=x;a++)
		for(b=1;b<=y;b++)
			if(cb[a][b])	ans++;
	printf("%d",ans);
	return 0;
}
