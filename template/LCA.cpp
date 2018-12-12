#include<cstdio>
#include<iostream>
#include<algorithm>
#define N 500009
#define M 1000009
using namespace std;
int en,n;
struct edge
{
	int e;
	edge *next;
}*v[N],ed[M];
void add_edge(int s,int e)
{
	en++;
	ed[en].next = v[s],v[s]=ed+en,v[s]->e =e;
}


int deep[N],f[N][25];				//f[a][b]表示a的第2的b次方祖先 
bool use[N];						//防止重复搜 

void dfs(int now,int dep)			//节点，深度 
{
	use[now] = true;				//标记 
	deep[now] = dep;				//深度 
	for(int k = 1; k <= 22; k++)	
	{
		int j = f[now][k-1];			//神奇的递推 
		f[now][k] = f[j][k-1];			
	}
	for(edge *e = v[now];e;e=e->next)	//往下搜 
	  if(!use[e->e])
	  {
	  	  f[e->e][0] = now;				//唯一可以确定 
	  	  dfs(e->e,dep+1);
	  }
	use[now] = false;
}
int jump(int u,int step)
{
	for(int k = 0; k <= 22; k++)				//二进制加速的跳 
	  if((step & (1<<k)))u = f[u][k];
	return u;
}
int qlca(int u,int v)
{
	if(deep[u] < deep[v])swap(u,v);					//u更深 
	u = jump(u,deep[u]-deep[v]);					//u跳 
	if(u==v)			return u; 
	for(int k = 22; k >= 0; k--)					//神奇的跳 
	  if(f[u][k] != f[v][k])u = f[u][k],v = f[v][k];//保证跳到答案的儿子 
	return  f[u][0];
}

int main()
{
	int m,s;					//m询问次数，s根 
	int u,v;					//两点 
	scanf("%d%d%d",&n,&m,&s);
	for(int i = 1; i <= n-1; i++)
	{
		scanf("%d%d",&u,&v);
		add_edge(u,v);				//无向 
		add_edge(v,u);
	}
	f[s][0] = s; 					//根初始化 
	dfs(s,0);						//神奇的dfs 
	while(m--)
	{
		scanf("%d%d",&u,&v);
		printf("%d\n",qlca(u,v));
	}
	return 0;
}



