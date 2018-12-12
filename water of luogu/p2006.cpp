#include<cstdio>
using namespace std;
int k,m,n,a[30008],b[30008];
int no=1;
int main()
{
	int i;
	scanf("%d%d%d",&k,&m,&n);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0||k/a[i]*b[i]>=n)	no=0,printf("%d ",i);
	}
	if(no)	printf("-1");	
	return 0;
}
