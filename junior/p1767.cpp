#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int n,ans=0;
char kb[150][250];
string t;
void f(int x,int y)
{
	kb[x][y]='*';
	if(x-1>=0&&kb[x-1][y]!='*')		f(x-1,y);
	if(x+1<=240&&kb[x+1][y]!='*')	f(x+1,y);
	if(y-1>=0&&kb[x][y-1]!='*')		f(x,y-1);
	if(y+1<=240&&kb[x][y+1]!='*')	f(x,y+1);
}
int main()
{
	int i,j,cnt=1;
	cin>>n;
	//getline(cin,t);
	for(i=0;i<n;i++)
	{
		getline(cin,t);
		for(j=0;j<t.length();j++)
			if(t[j]>='a'&&t[j]<='z')	kb[i][j]=t[j];
			else						kb[i][j]='*';
		kb[i][j]='*';
	}		
	for(j=0;j<240;j++)
			kb[n][j]='*';
			
			
			
		for(i=0;i<=n+1;i++)
			{
				for(j=1;j<=50;j++)	printf("%c",kb[i][j]);
				printf("\n");
			}	
			
			
			
			
	/*for(i=0;i<120;i++)
		for(j=0;j<240;j++)
			if(kb[i][j]!='*')	ans++,f(i,j);*/
	printf("%d",ans);
	return 0;
}
/*#include <iostream>
#include <cstring>
using namespace std;
string in;bool b[110][210];
int n;
int main ()
{
    cin>>n;
    int i,j,len[n+1];
    getline(cin,in);//读换行符
    for (i=0;i<n;i++)
    {
        getline(cin,in);
        len[i]=in.size();//用数组存大小
        for (j=0;j<len[i];j++)
        if (in[j]>='a'&&in[j]<='z') b[i][j]=1;//是字母的附1
    }
    return 0;
}*/
