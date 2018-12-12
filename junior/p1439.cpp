#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int p1[100008],p2[100008];
int lcs(int a,int b)
{
	if(a==0||b==0)	return 0;
	if(p1[a]==p2[b])	return lcs(a-1,b-1)+1;
	else				return max(lcs(a-1,b),lcs(a,b-1));
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>p1[i];
	for(int i=1;i<=n;i++)	cin>>p2[i];
	cout<<lcs(n,n);
	return 0;
}
