#include<cstdio>
#include<algorithm> 
using namespace std;
int now=0,ans=0,n,a[100008];
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	i=1;
	while(a[i]==0)	i++;
	for(;i<=n;)
	{		
		ans+=(a[i]-now)*6+6;
		now=a[i];
		while(a[i+1]==a[i]&&i+1<=n)	ans++,i++;
		i++;
	}
	ans+=(a[n])*4;
	printf("%d",ans);
	return 0;
}
