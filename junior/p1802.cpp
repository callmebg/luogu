#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
#ifdef WIN32
#define LL "%I64d"
#else
#define LL "%lld"
#endif
const int V = 1024;
ll f[V],fff[V];
int n,x;
int main()
{
	int l,w,u;
	scanf("%d%d",&n,&x);
	while(n--)
	{
		scanf("%d%d%d",&l,&w,&u);
		for(int i=x;i>=0;i--)
		{
			//f[i]+=l;				//wrong
			//if(i-u>=0)	f[i]=max(f[i],f[i-u]+w);	
			//printf("%d\n",f[i]);
			if(i-u>=0)	fff[i]=max(fff[i]+l,fff[i-u]+w);//right
			else		fff[i]+=l;
			//printf("%d\n",fff[i]);
			//if(f[i]!=fff[i])	printf("%d %d %d %d\n",n,i,f[i],fff[i]);
			//if(i==x)			printf("%d %d\n",f[i],fff[i]);
		}			
	}
	printf(LL,f[x]*5);
	return 0;
}
