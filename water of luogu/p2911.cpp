#include<cstdio>
using namespace std;
int s[4],num[10086],minn,minw=0;
int main()
{
	int a,b,c;
	scanf("%d%d%d",&s[1],&s[2],&s[3]);
	for(a=1;a<=s[1];a++)
		for(b=1;b<=s[2];b++)
			for(c=1;c<=s[3];c++)
				num[a+b+c]++;
	for(a=1;a<10086;a++)
	{
		if(num[a]>minw)	minn=a,minw=num[a];
	}
	printf("%d",minn);
	return 0;
}
