#include<cstdio>
using namespace std;
int x,ans=0;
int p[26][2];
bool used[26];
void dfs(int t)
{
	int i;
	if(t==x+1)	
	{
		ans++;
		return ;
	}
	if(!used[p[t][0]])
	{
		used[p[t][0]]=true;
		dfs(t+1);
		used[p[t][0]]=false;
	}
	if(!used[p[t][1]])
	{
		used[p[t][1]]=true;
		dfs(t+1);
		used[p[t][1]]=false;
	}
}
int main()
{
	int i;
	scanf("%d",&x);
	if(x==0)
	{
		printf("0");
		return 0;
	}
	for(i=1;i<=x;i++)	scanf("%d%d",&p[i][0],&p[i][1]);
	dfs(1);
	printf("%d",ans);
	return 0;
}
