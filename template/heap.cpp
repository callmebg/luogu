#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
const int MAX=1000005;
int minheap[MAX];
int sum=0;//sum��¼Ԫ���������ǵü�ʱ���� 
using namespace std;
void push(int b)
{   
	int now,f;   
	minheap[++sum]=b;
	for(now=sum,f=now>>1;f;now=f,f=now>>1)
	{
    	if(minheap[now]<minheap[f])    
        	swap(minheap[now],minheap[f]);
    	else
    		break;
     //ֻ��Ҫ�жϵ�ǰ�ڵ��븸�ڵ�Ĵ�С��ϵ
	}
}
void pop()
{
	int now,son;
	minheap[1]=minheap[sum--];//��Сֵ����� 
	for(now=1,son=now<<1;son<=sum;now=son,son=now<<1)
	{
    	if(son+1<=sum&&minheap[son+1]<minheap[son])
        	son++;//��Ϊ��С���ѣ������������ֵܽڵ�֮��ѡȡ��С���Ǹ������� 
    	if(minheap[now]<minheap[son])//��ʱû�н����ı�Ҫ 
        	break;
    	else
        	swap(minheap[now],minheap[son]);
	}    
}
int main()
{
	int n,c,t,i;
  	scanf("%d",&n);
  	for(i=1;i<=n;i++)
  	{
		scanf("%d",&c);
     	if(c==1)	scanf("%d",&t),push(t);    	             
      	else if(c==2)	printf("%d\n",minheap[1]);
      	else 	pop(); 
      
  	}
	return 0;    
}*/



#include<cstdio>
#include<queue>
using namespace std;
priority_queue<int> minheap;
int main()
{
	int n,c,t,i;
  	scanf("%d",&n);
  	for(i=1;i<=n;i++)
  	{
		scanf("%d",&c);
     	if(c==1)	scanf("%d",&t),minheap.push(-t);    	             
      	else if(c==2)	printf("%d\n",-minheap.top());
      	else 	minheap.pop(); 
      
  	}
	return 0;    
}
