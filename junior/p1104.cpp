#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
struct P
{
	string name;
	int y,m,d,num;
}p[108];
int n;
bool com(P p1,P p2)
{
	if(p1.y!=p2.y)	return p1.y<p2.y;
	if(p1.m!=p2.m)	return p1.m<p2.m;
	if(p1.d!=p2.d)	return p1.d<p2.d;
	return p1.num>p2.num;
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p[i].num=i;
		cin>>p[i].name>>p[i].y>>p[i].m>>p[i].d;
	}
	sort(p+1,p+1+n,com);
	for(i=1;i<=n;i++)
		cout<<p[i].name<<endl;	
	return 0;
}
