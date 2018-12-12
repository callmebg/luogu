#include<cstdio>
#include<algorithm>
using namespace std;
const int V = 100006;
int f[V];
int n,v;
int main()
{
	int a,b;
	scanf("%d%d",&v,&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		for(int i=a;i<=v;i++)
				f[i]=max(f[i],f[i-a]+b);
	}
	printf("%d",f[v]);
	return 0;
}
