#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll ans=0;//��������Ŀ������
int tm,ys[5006];
int yue[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},//ƽ 
				{0,31,29,31,30,31,30,31,31,30,31,30,31}};//ÿ���µ�����
bool is(int x)		//�ж����� 
{
	if((x%4==0&&x%100!=0)||(x%400==0))	return true;
	else	return false;
}
int main()
{	
    cin>>tm;  
    for(int i=1;i<=tm;i++)	scanf("%d",&ys[i]);
    int njs=0;//��¼�Ƿ�������
    int sn,sy,sr,ss,sf,zn,zy,zr,zs,zf;//��ʼ�������շ���ͽ����������շ���
    scanf("%d-%d-%d-%d:%d",&sn,&sy,&sr,&ss,&sf);
    scanf("%d-%d-%d-%d:%d",&zn,&zy,&zr,&zs,&zf);
    ll sj=0;//��¼����ʱ��
    ll n=sn,y=sy,r=sr,s=ss,f=sf;
    while(1)
	{
        if(n==zn&&y==zy&&r==zr&&s==zs&&f==zf)	break;
        sj+=1;//���ʱ���һ
        f+=1;//���Ӽ�һ
        if(f==60)	f=0,s++;
        if(s==24)	s=0,r++;
        njs=is(n)?1:0;
        if(r>yue[njs][y]) r=1,y++;
        if(y>12)y=1,n++;
    }
    sort(ys+1,ys+1+tm);
    ll js=0;//��ǰ�õķ���
    for(int i=1;i<=tm;i++)
	{
        if(js+ys[i]<=sj)
		{
            js+=ys[i];//��ǰ�õķ����ۼ�
            ans++;//��������Ŀ����һ
        }
        else		break;
    }
    cout<<ans;
    return 0;
}
