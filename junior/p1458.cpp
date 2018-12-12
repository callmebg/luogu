#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 40000;
int n,cnt=0;
struct num
{
	int a,b;
	double c;
}nu[N];
int gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}
bool com(num a,num b)
{
	return a.c<b.c;
}
int main()
{
	int i,j;	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<i;j++)
			if(gcd(i,j)==1)
				nu[++cnt].a=j,nu[cnt].b=i,nu[cnt].c=(double)j/i;
	sort(nu,nu+cnt,com);
	printf("0/1\n");
	for(i=1;i<=cnt;i++)
		printf("%d/%d\n",nu[i].a,nu[i].b);
	printf("1/1");
	return 0;
}
