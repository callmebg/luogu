#include<cstdio>
using namespace std;
const int mod = 100000000;
int n,m,fb[mod+5];
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
} 
int main()
{
	int n,m,i,t;
	fb[2]=fb[1]=1;
	scanf("%d%d",&n,&m);
	t=gcd(n,m);
	for(i=3;i<=t;i++)	fb[i]=(fb[i-1]+fb[i-2])%mod;
	printf("%d",fb[t]);
	return 0;
} 
