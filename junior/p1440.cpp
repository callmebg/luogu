#include <bits/stdc++.h>
#define N 2005000
using namespace std;
struct node
{
    int data,id;
//    node(int data,int id): data(data),id(id){ }
}change;					//����ĸı��� 
node que[N];
int head=0,tail=0;			//β�Ƕ������һ��Ԫ�صĺ�һ����ַ 
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
        if(que[head].id<i-m) head++;		//������         
        printf("%d\n",que[head].data);		//��Ŀ����Ҫ�󣬲�������ǰԪ�� 
        while(head<tail&&a[i]<=que[tail-1].data) tail--;    //��ǰ�� 
        change.id=i,change.data=a[i];
        que[tail++]=change;
    }
    return 0;
}
