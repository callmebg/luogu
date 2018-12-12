#include<cstdio>
#include<string.h>
using namespace std;
int n,nx=0,ny=0,t=0;
char cb[250][250],l=-1;
int main()
{
	int a,b;
	scanf("%s",cb[0]);
	n=strlen(cb[0]);
	printf("%d ",n);
	for(a=1;a<n;a++)
		scanf("%s",cb[a]);
	for(a=0;a<n;a++)
		for(b=0;b<n;b++)
			if(l==-1)
			{
				if(cb[a][b]!='0')printf("0 ");
				t=1,l=cb[a][b];				
			}		
			else if(cb[a][b]!=l)	printf("%d ",t),t=1,l=cb[a][b];
			else	t++;
	printf("%d",t);
	return 0;
} 




