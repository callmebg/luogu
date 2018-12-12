#include <bits/stdc++.h>
#define N 2005000
using namespace std;
struct node
{
    int data,id;
//    node(int data,int id): data(data),id(id){ }
}change;					//加入的改变量 
node que[N];
int head=0,tail=0;			//尾是队列最后一个元素的后一个地址 
int n,m,a[N];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    printf("0\n");
    change.data=a[1],change.id=1;
    que[tail++]=change;
    for(int i=2; i<=n; i++)
    {
        if(que[head].id<i-m) head++;		//过期了         
        printf("%d\n",que[head].data);		//题目鬼畜要求，不包括当前元素 
        while(head<tail&&a[i]<=que[tail-1].data) tail--;    //往前推 
        change.id=i,change.data=a[i];
        que[tail++]=change;
    }
    return 0;
}
