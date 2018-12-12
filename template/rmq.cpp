#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 100006;
int n,m;
int st[N][20];
void rmq_int()
{
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)	scanf("%d",&st[i][0]);
	for(j=1;(1<<j)<=n;j++)
		for(i=1;i+(1<<j)-1<=n;i++)
			st[i][j]=min(st[i][j-1],st[i+(1<<j-1)][j-1]);
}
int rmq(int l,int r)
{
	int k=0;
	while((1<<(k+1))<r-l+1)	k++;
	return min(st[l][k],st[r-(1<<k)+1][k]);
}
int main()
{
	int l,r;
	rmq_int();
	while(m--)
	{
		scanf("%d%d",&l,&r);
		printf("%d ",rmq(l,r));
	}
	return 0;
}
