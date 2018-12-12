#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int n;
	int a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if(a%b==0||b%a==0||gcd(a,b)==1)	printf("Stan wins\n");
		else							printf("Ollie wins\n");
	}
	return 0;
}
