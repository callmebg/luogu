#include<cstdio>
#include<map>
#include<string>
#include<iostream>
using namespace std;
int n,ans=0;
map<string,bool> p;
int main()
{
	int i;
	string t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(!p.count(t))	ans++,p.insert(pair<string,bool>(t,1));
	}
	cout<<ans;	
	return 0;
}
