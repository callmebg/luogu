/*#include<cstdio>
const int N=1000006;
using namespace std;
int n,k;
int bans[N][2],sans[N][2];
int bs[N],ss[N];
void push(int num,int tp,bool j)	//j==true for bans
{
	if(j==true)
	{
		while(bans[0][1]>bans[0][0]&&bans[bans[0][1]-1][0]<num)	--bans[0][1];
		bans[bans[0][1]][0]=num,bans[bans[0][1]][1]=tp;
		++bans[0][1];	
	}
	else
	{
		while(sans[0][1]>sans[0][0]&&sans[sans[0][1]-1][0]>num)	--sans[0][1];
		sans[sans[0][1]][0]=num,sans[sans[0][1]][1]=tp;
		++sans[0][1];
		/*for(int i=sans[0][0];i<sans[0][1];++i)	printf("%d ",sans[i][0]);
		printf("\n");
	}		
		
}	
int main()
{
	int i,t;
	bans[0][0]=sans[0][0]=bans[0][1]=sans[0][1]=1;	//head    tail
	scanf("%d%d",&n,&k);
	for(i=1;i<k;++i)
	{
		scanf("%d",&t);
		push(t,i,true);
		push(t,i,false);
	}
	scanf("%d",&t);
	push(t,i,true);
	push(t,i,false);
	bs[++bs[0]]=bans[bans[0][0]][0];
	ss[++ss[0]]=sans[sans[0][0]][0];	
	for(i=k+1;i<=n;++i)
	{
		scanf("%d",&t);
		push(t,i,true);
		push(t,i,false);
		if(bans[bans[0][0]][1]<=i-k)	++bans[0][0];
		if(sans[sans[0][0]][1]<=i-k)	++sans[0][0];		
		bs[++bs[0]]=bans[bans[0][0]][0];
		ss[++ss[0]]=sans[sans[0][0]][0];
		
		//printf("big no.%d in %d is %d\n",bs[0],bans[bans[0][0]][1],bans[bans[0][0]][0]);
		//printf("small no.%d in %d is %d\n",ss[0],sans[sans[0][0]][1],sans[sans[0][0]][0]);
	}
	for(i=1;i<=ss[0];++i)	printf("%d ",ss[i]);
	printf("\n");
	for(i=1;i<=bs[0];++i)	printf("%d ",bs[i]);
	return 0;
}*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N =2000005;
struct node
{
	int data,id;				//���ݣ�λ�� 
} change;						//��ǰѹ�� 
node que[N];					//�������� 
int head=0,tail=0;				//ͷβָ�루βΪ���һ��Ԫ�صĺ�һ����ַ�� 
int n,m,a[N];					//n�������ȣ�m���ڴ�С 
int main()
{
	int i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		while(head<tail&&a[i]<=que[tail-1].data)	tail--;		//ѹ�� 
		change.id=i,change.data=a[i];
		que[tail++]=change;
		if(que[head].id<=i-m)	head++;							//������ 
		if(i>=m)printf("%d ",que[head].data);					//ѹ�볬��m����� 
	}
	printf("\n");
	head=tail=0;
	for(i=1;i<=n;i++)
	{
		while(head<tail&&a[i]>=que[tail-1].data)	tail--;
		change.id=i,change.data=a[i];
		que[tail++]=change;
		if(que[head].id<=i-m)	head++;
		if(i>=m)printf("%d ",que[head].data);
	}
	return 0;
}
