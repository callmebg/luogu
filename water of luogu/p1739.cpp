#include<cstdio>
using namespace std;
char t,l=0;
int main()
{
	while(scanf("%c",&t)&&t!='@')
	{
		if(t=='(')	l++;
		if(t==')')
		{
			l--;
			if(l<0)
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("%s",l==0?"YES":"NO");
	return 0;
}
