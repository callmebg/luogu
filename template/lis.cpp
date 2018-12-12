#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100008;
int to[N],n;
int t,tow[N];
int dl[N],en;
int main()
{
	int a,b;
	int *p;
	scanf("%d",&n);
	for(a=1;a<=n;a++)	scanf("%d",&t),to[t]=a;
	for(a=1;a<=n;a++)	scanf("%d",&t),tow[a]=to[t];
	dl[1]=tow[1];
	en=1;
	for(a=2;a<=n;a++)
	{
		p=lower_bound(dl+1,dl+1+en,tow[a]);
		if(p==dl+1+en)	dl[++en]=tow[a];
		else			*p=tow[a];
	}
	printf("%d",en);
	return 0;
}
