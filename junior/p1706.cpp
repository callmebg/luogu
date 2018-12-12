#include<cstdio>
#include<algorithm>
using namespace std;
int a[10]={1,2,3,4,5,6,7,8,9};
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)	printf("%5d ",a[i]);
	while(next_permutation(a,a+n))
	{
		printf("\n");
		for(i=0;i<n;i++)	printf("%5d ",a[i]);
	}
	return 0;
}
