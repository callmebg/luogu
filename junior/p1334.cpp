#include<cstdio>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
priority_queue<int> hhh;
int n;
long long ans=0;
int main()
{
	int i,t1,t2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t1);
		hhh.push(-t1);
	}
	while(hhh.size()>1)
	{
		t1=hhh.top();
		hhh.pop();
		t2=hhh.top();
		hhh.pop();
		ans=ans-t1-t2;
		hhh.push(t1+t2);
	}
	cout<<ans;
	return 0;
}
