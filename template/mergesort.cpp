#include<stdio.h>
using namespace std;
const int MAX = 100008;
int n,source[MAX],temp[MAX];
void mymerge(int *s,int *t,int start,int mid,int end);
void mymergrsort(int *s,int *t,int start,int end);
void mymerge(int *s,int *t,int start,int mid,int end)
{
	int i=start,j=mid+1,k=start;
	while(i!=mid+1&&j!=end+1)
	{
		if(s[i]<s[j])	t[k++]=s[i++];
		else			t[k++]=s[j++];
	}
	while(i!=mid+1)	t[k++]=s[i++];
	while(j!=end+1)	t[k++]=s[j++];
	for(i=start;i<=end;++i)	s[i]=t[i];
}
void mymergesort(int *s,int *t,int start,int end)
{
	int mid=(start+end)/2;
	if(start<end)
	{
		mymergesort(s,t,start,mid);
		mymergesort(s,t,mid+1,end);
		mymerge(s,t,start,mid,end);
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;++i)	scanf("%d",&source[i]);
	mymergesort(source,temp,1,n);
	for(i=1;i<=n;++i)   printf("%d ",source[i]);
	return 0;
}
