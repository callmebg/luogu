#include<cstdio>
using namespace std;
typedef long long ll;
int k;
int main()
{
	int a,b,c;
	a=b=1;
	c=2;
	scanf("%d",&k);
	while(c<=k)
	{
		a=b,b=c,c=a+b;
	}
	printf("m=%d\nn=%d",a,b);
	return 0;
}
