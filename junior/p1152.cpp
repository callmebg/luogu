#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool op[100000008];
int num[1008],n;
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&num[i]);
	for(i=1;i<n;i++)
		op[abs(num[i+1]-num[i])]=true;
	for(i=1;i<n;i++)if(!op[i])break;
	if(i==n)	printf("Jolly");
	else			printf("Not Jolly");
	return 0;
}
