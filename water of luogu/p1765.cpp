#include<cstdio>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
string word;
int wl,ans=0,v[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main()
{
	getline(cin,word);
	wl=word.length();
	for(int a=0;word[a];a++)
	{
		if(word[a]==' ')	ans++;
		if(word[a]>='a'&&word[a]<='z')	ans+=v[word[a]-'a'];
	}
	printf("%d",ans);
	return 0;
}
