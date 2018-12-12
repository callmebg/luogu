#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
const int MAX=1000005;
int minheap[MAX];
int sum=0;//sum记录元素总数，记得及时更新 
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
     //只需要判断当前节点与父节点的大小关系
	}
}
void pop()
{
	int now,son;
	minheap[1]=minheap[sum--];//最小值被冲掉 
	for(now=1,son=now<<1;son<=sum;now=son,son=now<<1)
	{
    	if(son+1<=sum&&minheap[son+1]<minheap[son])
        	son++;//因为是小根堆，所以在两个兄弟节点之间选取更小的那个向上推 
    	if(minheap[now]<minheap[son])//此时没有交换的必要 
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
