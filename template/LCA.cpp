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


int deep[N],f[N][25];				//f[a][b]��ʾa�ĵ�2��b�η����� 
bool use[N];						//��ֹ�ظ��� 

void dfs(int now,int dep)			//�ڵ㣬��� 
{
	use[now] = true;				//��� 
	deep[now] = dep;				//��� 
	for(int k = 1; k <= 22; k++)	
	{
		int j = f[now][k-1];			//����ĵ��� 
		f[now][k] = f[j][k-1];			
	}
	for(edge *e = v[now];e;e=e->next)	//������ 
	  if(!use[e->e])
	  {
	  	  f[e->e][0] = now;				//Ψһ����ȷ�� 
	  	  dfs(e->e,dep+1);
	  }
	use[now] = false;
}
int jump(int u,int step)
{
	for(int k = 0; k <= 22; k++)				//�����Ƽ��ٵ��� 
	  if((step & (1<<k)))u = f[u][k];
	return u;
}
int qlca(int u,int v)
{
	if(deep[u] < deep[v])swap(u,v);					//u���� 
	u = jump(u,deep[u]-deep[v]);					//u�� 
	if(u==v)			return u; 
	for(int k = 22; k >= 0; k--)					//������� 
	  if(f[u][k] != f[v][k])u = f[u][k],v = f[v][k];//��֤�����𰸵Ķ��� 
	return  f[u][0];
}

int main()
{
	int m,s;					//mѯ�ʴ�����s�� 
	int u,v;					//���� 
	scanf("%d%d%d",&n,&m,&s);
	for(int i = 1; i <= n-1; i++)
	{
		scanf("%d%d",&u,&v);
		add_edge(u,v);				//���� 
		add_edge(v,u);
	}
	f[s][0] = s; 					//����ʼ�� 
	dfs(s,0);						//�����dfs 
	while(m--)
	{
		scanf("%d%d",&u,&v);
		printf("%d\n",qlca(u,v));
	}
	return 0;
}



