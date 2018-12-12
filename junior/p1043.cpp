/*#include<bits/stdc++.h>	//±©Á¦³öÆæ¼£ 
using namespace std;
int maxa,mina;
int n,m,t,num[250],sum[250];
void dfs(int f,int t,int nowm,int ans)
{
	int ttt;
	if(nowm==m)
	{
		maxa=max(maxa,ans);
		mina=min(mina,ans);
		return;
	}
	if(nowm==m-1)
	{
		ttt=(sum[f+n-1]-sum[t])%10;
		if(ttt<0)	ttt+=10;
		dfs(f,f+n-1,nowm+1,ans*ttt);
	}
	else
	for(int i=1;i<=m-nowm+1;i++)
	{
		ttt=(sum[t+i]-sum[t])%10;
		if(ttt<0)	ttt+=10;
		dfs(f,t+i,nowm+1,ans*ttt);
	}
}
int main()
{
	memset(&maxa,-0x3f3f3f3f,sizeof(maxa));
	memset(&mina,0x3f3f3f3f,sizeof(mina));
	int i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&num[i]),num[i+n]=num[i];
	for(i=1;i<=2*n;i++)
		sum[i]=sum[i-1]+num[i];
	for(i=1;i<n;i++)
		dfs(i,i-1,0,1);
	printf("%d\n%d",mina,maxa);
	return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
const int MAX = 108;
int n,m,f[MAX][MAX][MAX],fff[MAX][MAX][MAX],sum[MAX*2],t;
int main()
{
	memset(f,-0x3f3f3f3f,sizeof(f));
	memset(fff,0x3f3f3f3f,sizeof(fff));
	int a,b,c,d;
	scanf("%d%d",&n,&m);
	for(a=1;a<=n;a++)
		scanf("%d",&f[a][1][1]),fff[a+n][1][1]=fff[a][1][1]=f[a+n][1][1]=f[a][1][1];
	for(a=1;a<=2*n;a++)	sum[a]=sum[a-1]+f[a][1][1];
	for(a=1;a<=n;a++)
		for(b=2;b<=n;b++)
			for(c=2;c<=m;c++)
				for(d=1;d<b;d++)
				{
					t=(sum[a+b-1]-sum[a+d-1])%10;
					if(t<0)	t+=10;
					f[a][b][c]=max(f[a][b][c],t*f[a][a+d-1][c-1]);
					fff[a][b][c]=min(fff[a][b][c],t*fff[a][a+d-1][c-1]);
					if(b==n&&c==m)
						f[0][0][0]=max(f[0][0][0],f[a][b][c]),
						fff[0][0][0]=min(fff[0][0][0],fff[a][b][c]);
					printf("%d %d %d = %d\n",a,b,c,f[a][b][c]);
				}
	printf("%d\n%d",fff[0][0][0],f[0][0][0]);							
	return 0;
}*/







#include<bits/stdc++.h>
using namespace std;
const int MAX = 108;
int n,m,f[MAX][MAX][MAX],fff[MAX][MAX][MAX],sum[MAX*2],t,ttt;
int main()
{
	memset(f,-0x3f3f3f3f,sizeof(f));
	memset(fff,0x3f3f3f3f,sizeof(fff));
	int a,b,c,d;
	scanf("%d%d",&n,&m);
	for(a=1;a<=n;a++)
		scanf("%d",&f[a][a][1]),fff[a+n][a+n][1]=fff[a][a][1]=f[a+n][a+n][1]=f[a][a][1];
	for(a=1;a<=2*n;a++)	sum[a]=sum[a-1]+f[a][a][1];
	for(a=1;a<=n;a++)
		for(b=a+1;b<=2*n;b++)	fff[a][b][1]=f[a][b][1]=sum[b]-sum[a-1];
	for(a=1;a<=n;a++)
		for(b=a+1;b<=2*n;b++)
			for(c=2;c<=m&&c<=b-a;c++)
				for(d=a;d<b;d++)
				{
					ttt=f[a][d][c-1];
					if(ttt<0)	ttt+=10;
					t=(sum[b]-sum[d])%10;
					if(t<0)	t+=10;
					f[a][b][c]=max(f[a][b][c],ttt*t);			
					if(b-a+1==n&&c==m&&f[a][b][c]>f[0][0][0])	f[0][0][0]=f[a][b][c];
					fff[a][b][c]=min(fff[a][b][c],ttt*t);
					//printf("%d %d %d = %d\n",a,b,c,f[a][b][c]);
					if(b-a+1==n&&c==m&&fff[a][b][c]<fff[0][0][0])fff[0][0][0]=fff[a][b][c];
				}
				
	printf("%d\n%d",fff[0][0][0],f[0][0][0]);							
	return 0;
}






