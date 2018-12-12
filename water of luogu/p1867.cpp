#include<cstdio>
using namespace std;
int n,a,m=0,t=0;
double x,ol=10;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf%d",&x,&a);
		ol-=x;
		if(ol>10)	ol=10;
		if(ol<=0)	break;
		t+=a;
		while(t>=1<<m)
		t-=1<<m,m++;
	}
	printf("%d %d",m,t);
	return 0;
}
