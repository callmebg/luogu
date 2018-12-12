#include<cstdio>
#include<string.h>
using namespace std;
const int MAX = 1000008;	//��Χ 
char s[MAX],t[MAX];			//s���⣬tģ�� 
int sl,tl,next[MAX];
void kmp()
{
	int i,j;
	for(i=2,j=0;i<=tl;i++)
	{
		while(j&&t[i]!=t[j+1])	j=next[j];//�ҵ����ǰ��׺�ص�����
		if(t[i]==t[j+1])	j++;
		next[i]=j;
	}
	for(i=1,j=0;i<=sl;i++)
	{
		while(j&&s[i]!=t[j+1])	j=next[j];//�����ƥ�䣬������kmp����������
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
