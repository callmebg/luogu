#include<cstdio>
using namespace std;
int n;
char x[108],y[108];
int main()
{
	scanf("%d",&n);
	scanf("%s%s",x,y);
	for(int i=0;i<n;i++)
	{
		if(y[i]>x[i])
		{
			printf("-1");
			return 0;
		}
	}
	printf("%s",y);
	return 0;
}
