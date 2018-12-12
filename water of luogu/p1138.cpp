#include<cstdio>
using namespace std;
int n,k,t,c=0;
int ton[30008];
int main()
{
	int a;
	scanf("%d%d",&n,&k);
	for(a=1;a<=n;a++)	scanf("%d",&t),ton[t]++;
	if(n<1)	
	{
		printf("NO RESULT");
		return 0;
	}
	for(a=1;a<=30000;a++)
	{
		if(ton[a])	c++;
		if(c==k)
		{
			printf("%d",a);
			return 0;
		}
	}
	printf("NO RESULT");
	return 0;
}
