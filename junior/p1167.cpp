#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll ans=0;//最多可做题目的数量
int tm,ys[5006];
int yue[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},//平 
				{0,31,29,31,30,31,30,31,31,30,31,30,31}};//每个月的天数
bool is(int x)		//判断闰年 
{
	if((x%4==0&&x%100!=0)||(x%400==0))	return true;
	else	return false;
}
int main()
{	
    cin>>tm;  
    for(int i=1;i<=tm;i++)	scanf("%d",&ys[i]);
    int njs=0;//记录是否是闰年
    int sn,sy,sr,ss,sf,zn,zy,zr,zs,zf;//开始的年月日分秒和结束的年月日分秒
    scanf("%d-%d-%d-%d:%d",&sn,&sy,&sr,&ss,&sf);
    scanf("%d-%d-%d-%d:%d",&zn,&zy,&zr,&zs,&zf);
    ll sj=0;//记录相差的时间
    ll n=sn,y=sy,r=sr,s=ss,f=sf;
    while(1)
	{
        if(n==zn&&y==zy&&r==zr&&s==zs&&f==zf)	break;
        sj+=1;//相差时间加一
        f+=1;//分钟加一
        if(f==60)	f=0,s++;
        if(s==24)	s=0,r++;
        njs=is(n)?1:0;
        if(r>yue[njs][y]) r=1,y++;
        if(y>12)y=1,n++;
    }
    sort(ys+1,ys+1+tm);
    ll js=0;//当前用的分钟
    for(int i=1;i<=tm;i++)
	{
        if(js+ys[i]<=sj)
		{
            js+=ys[i];//当前用的分钟累加
            ans++;//最多可做题目数加一
        }
        else		break;
    }
    cout<<ans;
    return 0;
}
