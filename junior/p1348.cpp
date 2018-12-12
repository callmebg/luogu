#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long long n1,n2;
int main()
{
	long long i,ans=0;
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++)
		if(abs(i%4)!=2)	ans++;
	cout<<ans;
	return 0;
}
