#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int f[102008],dabiao[19]; 
int m;
int main()
{
	for(int i=0;i<=100000;i++)	f[i]=999999;
	scanf("%d",&m);
	for(int i=1;i<19;i++)
		dabiao[i]=i*i*i*i,f[dabiao[i]]=1;		
	for(int i=1;i<19;i++)
		for(int j=1;dabiao[i]+j<=m;j++)
				f[j+dabiao[i]]=min(f[j+dabiao[i]],f[j]+1);
	printf("%d",f[m]);
	return 0;
}
