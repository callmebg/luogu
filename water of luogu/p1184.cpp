#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
string fb[26];
bool dg(string t)
{
	for(int a=1;a<=n;a++)
		if(fb[a]==t)	return true;
	return false;
}
int main()
{
	int a;
	cin>>n>>m;
	getline(cin,fb[0]);
	for(a=1;a<=n;a++)
		getline(cin,fb[a]);
	for(a=1;a<=m;a++)
	{
		getline(cin,fb[0]);
		if(fb[0][fb[0].size()-1]!=13)fb[0]=fb[0]+(char)13;
		if(dg(fb[0]))	ans++;
	}
	printf("%d",ans);
	return 0;
}
