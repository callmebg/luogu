#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,c,ans=0,cnt=0;
ll num[200008],cn[200008],an[200008];
int main()
{
	int a,b;
	scanf("%lld%lld",&n,&c);
	for(a=1;a<=n;a++)
		scanf("%lld",&num[a]);
	sort(num+1,num+1+n);
	an[++cnt]=num[1];
	cn[cnt]=1;
	for(a=2;a<=n;)
	{
		while(num[a]==num[a-1]&&a<=n)	cn[cnt]++,a++;
		if(a<=n)
		{
			an[++cnt]=num[a];
			cn[cnt]=1;
			a++;
		}
	}
	for(a=1;a<cnt;a++)
		for(b=a+1;b<=cnt;b++)
			if((an[a]-an[b])==c||(an[a]-an[b])==-c)	ans+=cn[a]*cn[b];
	//if(ans==41006)	printf("00000");
	printf("%lld",ans);
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int n,c,ans=0,cnt=0;
int num[200008];
int main()
{
	int a,b;
	scanf("%d%d",&n,&c);
	for(a=1;a<=n;a++)
		scanf("%d",&num[a]);
	for(a=1;a<n;a++)
		for(b=a+1;b<=n;b++)
			if((num[a]-num[b])==c||(num[a]-num[b])==-c)	ans++;
	printf("%d",ans);
	return 0;
}*/
