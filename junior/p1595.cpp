#include<cstdio>
using namespace std;
int f[10086],n;
int main()
{
	int i;
	scanf("%d",&n);
	f[1]=0,f[2]=1;
	for(i=3;i<=n;i++)
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	printf("%d",f[n]);
	return 0;
} 
