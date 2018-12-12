#include<cstdio>
using namespace std;
const int MAX = 100008;
int num[MAX],n;
void Qsort(int *p,int l,int r)
{
	int i=l;
	int j=r;
	int t;
	int mid=p[(l+r)/2];
	while(i<=j)
	{
		while(p[i]<mid)	i++;
		while(p[j]>mid)	j--;
		if(i<=j)
		{
			t=p[i];
			p[i]=p[j];
			p[j]=t;
			i++;
			j--;
		}
	}
	if(j>l)	Qsort(p,l,j);
	if(i<r)	Qsort(p,i,r);
} 
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&num[i]);
	Qsort(num,1,n);
	for(i=1;i<=n;i++)
		printf("%d ",num[i]);
	return 0;
}
