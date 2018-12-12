#include<bits/stdc++.h>
using namespace std;
int h[108][108],ans[108][108],c,r,fff=-1;
int dfs(int x,int y)
{
	int tans=1;
	if(ans[x][y]!=-1)	return ans[x][y];
	tans=1;
	if(x-1>=1&&h[x-1][y]>h[x][y])	tans=max(tans,dfs(x-1,y)+1);
	if(x+1<=r&&h[x+1][y]>h[x][y])	tans=max(tans,dfs(x+1,y)+1);
	if(y-1>=1&&h[x][y-1]>h[x][y])	tans=max(tans,dfs(x,y-1)+1);
	if(y+1<=c&&h[x][y+1]>h[x][y])	tans=max(tans,dfs(x,y+1)+1);
	return ans[x][y]=tans;	//must!!!!!!!!!!!!!!!!!!!!
}
int main()
{
	int i,j;
	memset(ans,-1,sizeof(ans));
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
				scanf("%d",&h[i][j]);
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)	fff=max(fff,dfs(i,j));
	printf("%d",fff);
	return 0;
}
