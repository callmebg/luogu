#include<cstdio>
using namespace std;
int n;
char num[108];
int max(int n1,int n2)
{
	return n1>n2?n1:n2;
}
int ans()
{
	int tans=0;
	for(int a=1;a<n;a++)	if(num[a]=='V'&&num[a+1]=='K')	tans++;
	return tans;
}
int main()
{
	int mans;
	scanf("%d",&n);
	scanf("%s",num+1);
	mans=ans();
	for(int a=1;a<=n;a++)
	{
		if(num[a]=='V')	num[a]='K',mans=max(mans,ans()),num[a]='V';
		else			num[a]='V',mans=max(mans,ans()),num[a]='K';
	}
	printf("%d",mans);
	return 0;
}
