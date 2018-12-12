#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
const int N=10006,M=500006;
int n,m,s,en=0;
int dist[N];
bool inque[N];
struct edge
{
	int t;
	int d;
	edge *next;
}*v[N],ed[M];
void add_edge(int f,int t,int d)
{
	ed[++en].next=v[f];
	ed[en].t=t;
	ed[en].d=d;
	v[f]=ed+en;
}
void spfa()
{
	int now;
	edge* e;
	//memset(dist,0x3f,sizeof(dist));
	dist[s]=0;
	inque[s]=true;
	queue<int> que;
	que.push(s);
	while(!que.empty())
	{
		now=que.front();
		que.pop();
		inque[now]=false;
		for(e=v[now];e;e=e->next)
		if(dist[e->t]>dist[now]+e->d)
		{
			dist[e->t]=dist[now]+e->d;
			if(!inque[e->t])
			{
				que.push(e->t);
				inque[e->t]=true;
			}
		}
	}
}
int main()
{
	int i,f,t,d;
	scanf("%d%d%d",&n,&m,&s);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d%d",&f,&t,&d);
		add_edge(f,t,d);
	}
	for(i=1;i<=n;i++)	dist[i]=2147483647;
	spfa();
	for(i=1;i<=n;i++)
		printf("%d ",dist[i]);
	return 0;
}
