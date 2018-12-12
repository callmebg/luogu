#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int tong[100000008];
int t,n;
int main()
{
	int m,i,max,min,cou,ans;
	scanf("%d",&t);
	while(t--)
	{
		max=-1;
		min=9999999;
		cou=0;		
		memset(tong,0,sizeof(tong));
		cin>>n;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m),tong[m]++;
			if(m>max)		max=m;
			if(m<min)		min=m;
		}			
		for(i=min;i<=max;i++)
			if(tong[i]>cou)	cou=tong[i],ans=i;
		printf("%d\n",ans);
	}
	return 0;
}
