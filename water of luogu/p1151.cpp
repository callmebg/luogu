#include<bits/stdc++.h>
using namespace std;
int k,t=1,ans=0;
int main()
{
	scanf("%d",&k);
	for(int i=10000;i<=30000;i++)
	{
		if(i%1000%k==0&&i/10%1000%k==0&&i/100%1000%k==0)t=0,	printf("%d\n",i);
	}
	if(t)	printf("No");
	return 0;
}
