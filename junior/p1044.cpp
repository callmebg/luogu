#include<cstdio>
using namespace std;
typedef long long ll;
const int MAX = 40; 
ll cbn[MAX][MAX],cat[MAX];
void icbn()
{
	int i,j;
	for(i=0;i<=MAX;i++)	cbn[i][i]=cbn[i][0]=1;
	for(i=2;i<=MAX;i++)
		for(j=1;j<i;j++)	cbn[i][j]=cbn[i-1][j]+cbn[i-1][j-1];
}
void icat()
{
	cat[0]=1;
	for(int i=1;i<=MAX;i++)
		cat[i]=cat[i-1]*(4*i-2)/(i+1);
}
int main()
{
	int a;
	scanf("%d",&a);
	icat();
	/*for(int i=1;i<MAX;i++)
	{
		for(int j=1;j<=i;j++)	printf("%lld ",cbn[i][j]);
		printf("\n");
	}*/
	//printf("%lld",cbn[2*a][a]/(a+1));
	printf("%lld",cat[a]);
	return 0;
}
