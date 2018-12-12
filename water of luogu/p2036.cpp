#include<cstdio>
#include<algorithm>
using namespace std;
int aa=1,bb=0;
int n,a[12],b[12],mina=99999999;
bool used[12];
void dfs(int x)
{
	int i;
	if(x==n+1)	return;
	for(i=1;i<=n;i++)
	{
		if(!used[i])
		{
			used[i]=true;
			aa*=a[i],bb+=b[i];
			mina=min(mina,abs(aa-bb));
			dfs(x+1);
			aa/=a[i],bb-=b[i];
			used[i]=false;
		}
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	scanf("%d%d",&a[i],&b[i]);
	dfs(1);
	printf("%d",mina);
	return 0;
}
