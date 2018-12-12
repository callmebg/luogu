/*#include<cstdio>
#include<iostream>
using namespace std;
bool wei[36];
long long x,ans=0;
int main()
{
	int i;
	cin>>x;
	for(i=1;i<=16;i++)
	{
		wei[16-i]=(x%2)?true:false;
		x/=2;	
	}	
	for(i=1;i<=16;i++)
	{
		wei[32-i]=(x%2)?true:false;
		x/=2;
	}
	for(i=31;i>=0;i--)
		if(wei[i])ans+=1<<31-i;
	cout<<ans;
	return 0;
}*/
#include<iostream>
#include<cstdio>
using namespace std;
long long x;
int main()
{
	cin>>x;
	x=x%(1<<16)*(1<<16)+x/(1<<16);
	cout<<x;
	return 0;
}
