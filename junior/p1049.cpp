#include<bits/stdc++.h>
using namespace std;
int v,n,f[20006],t;
int main()
{
	int a;
	scanf("%d%d",&v,&n);
	while(n--)
	{
		scanf("%d",&t);
		for(a=v;a>=t;a--)
			f[a]=max(f[a],f[a-t]+t);
	}
	printf("%d",v-f[v]);
	return 0;
}

