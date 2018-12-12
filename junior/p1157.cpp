/*#include<cstdio>
using namespace std;
int pl[26],n,r;
void print()
{
	for(int i=1;i<=r;i++)
		printf("%3d",pl[i]);
	printf("\n");
}
void dfs(int cs,int last)
{
	if(cs==r)
	{
		print();
		return ;
	}
	for(int i=last+1;i<=n;i++)
	{
		pl[++pl[0]]=i;
		dfs(cs+1,i);
		pl[0]--;
	}		
}
int main()
{
	scanf("%d%d",&n,&r);
	dfs(0,0);
	return 0;
}*/
#include<cstdio>
using namespace std;
#ifdef WIN32
#define LL "%I64d"
#else
#define LL "%lld"
#endif
typedef long long ll;
int n,r;
bool can(ll x)
{
	int i=0;
	while(x)
	{
		if(x&1)	i++;
		x>>=1;
	}
	return (i==r)?1:0;
}
void print(ll x)
{
	for(int p=1;x;p++,x>>=1)			//ÐèÒªÅÅÐò²Ù×÷ 
		if(x&1)	printf("%3d",p);
	printf("\n");
}
int main()
{
	ll s;
	scanf("%d%d",&n,&r);
	for(s=1;s<1<<n;s++)
		if(can(s))	print(s);
	return 0;
}
