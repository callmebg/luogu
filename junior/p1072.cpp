#include<cstdio>
using namespace std;
int a0,a1,b0,b1;
int n,ans;
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int t,tt;
	scanf("%d",&n);
	while(n--)
	{
		ans=0;
		scanf("%d%d%d%d",&a0,&a1,&b0,&b1);
		for(t=1;t*t<=b1;t++)	//½µµÍ¸´ÔÓ¶È£¬1¿ªÊ¼ 
			if(b1%t==0)
			{
				if(t%a1==0&&gcd(b1/b0,b1/t)==1&&gcd(t/a1,a0/a1)==1)
					ans++;
				tt=b1/t;
				if(tt==t)	continue;
				if(tt%a1==0&&gcd(b1/b0,b1/tt)==1&&gcd(tt/a1,a0/a1)==1)
					ans++;
			}
		printf("%d\n",ans);
	}
	
	return 0;
}
