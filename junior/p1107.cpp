#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int n;
string st[100];
bool cmp(string a,string b)
{
    return a+b>b+a;
}
int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++) cin>>st[i];
    sort(st+1,st+n+1,cmp);
    for (int i=1;i<=n;i++)
      cout<<st[i];
    return 0;
}
