/*#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 200005;
int sum[N],n,ans=-999999;
int main()				//±©Á¦ 
{
	int t,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&t),sum[i]=sum[i-1]+t;
	for(i=0;i<n;i++)
		for(j=i+1;j<=n;j++)
			ans=max(ans,sum[j]-sum[i]);
	printf("%d",ans);
	return 0;
}*/
#include<cstdio>
#include<algorithm>
using namespace std;
int n,now=0,ans=-999999;
int main()
{
	int t;
	scanf("%d",&n);		//Ì°ÐÄ 
	while(n--)
	{
		scanf("%d",&t);
		now+=t;
		ans=max(ans,now);
		if(now<=0)	now=0;		
	}
	printf("%d",ans);
	return 0;
}
