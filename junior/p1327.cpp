#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int an[100008];
int n;
long long ans=0;
int main()
{
	int i,j,tmin,tw;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	scanf("%d",&an[i]);
	for(i=1;i<n;i++)
	{
		for(j=i+1,tw=-1,tmin=an[i];j<=n;j++)
			if(an[j]<tmin)	tmin=an[j],tw=j;
		if(tw!=-1)	swap(an[i],an[tw]),ans++;
	}
		
	cout<<ans;
	return 0;
}
