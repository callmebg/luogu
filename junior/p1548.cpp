#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long ans1=0,ans2=0;
	int a,b,c,d,n,m;
	scanf("%d%d",&n,&m);
	for(a=1;a<=n;a++)
		for(b=1;b<=m;b++)
			for(c=a;c<=n;c++)
				for(d=b;d<=m;d++)
					if(c-a==d-b)	ans1++;
					else			ans2++;
	cout<<ans1<<" "<<ans2;
	return 0;
}
