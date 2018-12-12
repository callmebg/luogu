#include<cstdio>
#include<algorithm>
using namespace std;
const int V = 10009;
int f[V];
int n,v,ans=0;
int main()
{
	int a;
	scanf("%d%d",&n,&v);
	f[0]=1;
	while(n--)
	{
		scanf("%d",&a);		
		for(int i=v;i-a>=0;i--)
			if(f[i-a])	f[i]+=f[i-a];				
	}
	printf("%d",f[v]);
	return 0;
}



