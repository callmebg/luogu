#include<cstdio>
using namespace std;
int n,m,x,y,tx,ty,x1,x2,y1,y2;
int mapc[108][108],mapl[108][108];
int main()
{
	int a,b,c;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(a=1;a<=x;a++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for(c=x1;c<=x2;c++)
			for(b=y1;b<=y2;b++)
			mapc[c][b]++,mapl[c][b]=a;	
	}		
	while(y--)
	{
		scanf("%d%d",&tx,&ty);
		if(mapc[tx][ty])
			printf("Y %d %d\n",mapc[tx][ty],mapl[tx][ty]);
		else
			printf("N\n");
	}
	return 0;
}
