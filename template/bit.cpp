#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define lowbit(i) (i&-i)
typedef long long ll;
using namespace std;
const int N = 500005;
int n,m;
int bit[N];
void add(int x,int v)
{
	while(x<=n)
	{
		bit[x]+=v;
		x+=lowbit(x);
	}
}
int query(int x)
{
	int ans=0;
	while(x>0)
	{
		ans+=bit[x];
		x-=lowbit(x);
	}
	return ans;
}
int main()
{
	int i,x,v,y;
	int hhh;
	int s1,s2;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&hhh),add(i,hhh);
	while(m--)
	{
		scanf("%d",&hhh);
		if(hhh==1)
		{
			scanf("%d%d",&x,&v);
			add(x,v);
		}
		else
		{
			scanf("%d%d",&x,&y);
			printf("%d\n",query(y)-query(x-1));
		}
	}
	return 0;
}
