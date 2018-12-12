#include<cstdio>
#include<string.h>
using namespace std;
char rnw[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int n,nl,m,rn=0;
int hhh[60];
char num[60];
int pow(int a,int b)
{
	int t=1;
	while(b!=0)
	{
		if(b&1==1)	t=t*a;
		a=a*a;
		b>>=1;
	}
	return t;
}
int tran(char x)
{
	if(x>='0'&&x<='9')	return x-'0';
	else				return x-'A'+10;
}
int main()
{
	int i,mod;
	scanf("%d",&n);
	scanf("%s",num);
	scanf("%d",&m);
	nl=strlen(num);
	for(i=1;i<=nl;i++)
		rn+=tran(num[nl-i])*pow(n,i-1);
	if(rn==0)	printf("0");
	hhh[0]=0;
	while(rn)
	{	    
		mod=rn%m;
		mod=(mod<0)?(mod-m):mod;
		hhh[++hhh[0]]=mod;
		rn=(rn-mod)/m;
	}
	for(i=hhh[0];i>0;i--)
		printf("%c",rnw[hhh[i]]);
	return 0;
}
