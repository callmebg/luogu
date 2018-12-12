#include<cstdio>
using namespace std;
struct jux
{
	int x1,x2,y1,y2;
}ju[2006];
int n,m;
int main()
{
	int x,y;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		scanf("%d%d%d%d",&ju[i].x1,&ju[i].y1,&ju[i].x2,&ju[i].y2);
	while(n--)
	{
		int i,sum=0,l;
		scanf("%d%d",&x,&y);
		for(i=1;i<=m;i++)
			if(ju[i].x1<=x&&ju[i].x2>=x&&ju[i].y1<=y&&ju[i].y2>=y)	l=i,sum++;
		if(sum)	printf("YES %d %d",sum,l);
		else	printf("NO");
		printf("\n");
	}
	return 0;
}
