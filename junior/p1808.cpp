#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string word[10008],l;
int n,ans=0;
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cin>>word[i];
		sort(word[i].begin(),word[i].end());
	}
	sort(word+1,word+1+n);
	for(i=1;i<=n;i++)
		if(word[i]!=l)	l=word[i],ans++;
	cout<<ans;
	return 0;
}
