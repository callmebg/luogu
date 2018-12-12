#include<cstdio>
#include<string.h>
using namespace std;
const int MAX = 1000008;	//范围 
char s[MAX],t[MAX];			//s问题，t模板 
int sl,tl,next[MAX];
void kmp()
{
	int i,j;
	for(i=2,j=0;i<=tl;i++)
	{
		while(j&&t[i]!=t[j+1])	j=next[j];//找到最长的前后缀重叠长度
		if(t[i]==t[j+1])	j++;
		next[i]=j;
	}
	for(i=1,j=0;i<=sl;i++)
	{
		while(j&&s[i]!=t[j+1])	j=next[j];//如果不匹配，则将利用kmp数组往回跳
		if(s[i]==t[j+1])	j++;
		if(j==tl)
		{
			printf("%d\n",i-tl+1);
			j=next[j];
		}
	} 
}
int main()
{
	scanf("%s",s+1);
	scanf("%s",t+1);
	sl=strlen(s+1);
	tl=strlen(t+1);
	kmp();
	for(int i=1;i<=tl;i++)	printf("%d ",next[i]);
	return 0;
} 
