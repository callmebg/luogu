#include<cstdio>
using namespace std;
int n,a,b,t,sum=0;
int dg=0,now;
int main()
{
	scanf("%d",&n);
	while(sum<n*n)
	{
		scanf("%d",&t);
		if(dg==0)
		{
			for(now=1;now<=t;++now)
			{
				printf("0");
				sum++;
				if(sum%n==0&&sum!=0)	printf("\n");
			}
			dg=1;
		}
		else
		{
			for(now=1;now<=t;++now)
			{
				printf("1");
				sum++;
				if(sum%n==0&&sum!=0)	printf("\n");
			}
			dg=0;
		}
	}
	return 0;
}
