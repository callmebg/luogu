#include<cstdio>
using namespace std;
int t,x1,x2,y1,y2,ans1,ans2;
int gcd(int x,int y)
{
	return y==0?x:gcd(y,x%y);
}
int main()
{
	scanf("%d/%d%d/%d",&x1,&y1,&x2,&y2);
	ans1=x1*x2;
	ans2=y1*y2;
	t=gcd(ans1,ans2);
	ans1/=t;
	ans2/=t;
	printf("%d %d",ans2,ans1);	
	return 0;
}

