#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll zh,zm,zs,sh,sm,ss;
ll rz,rs,k;
int main()
{
	scanf("%lld:%lld:%lld",&zh,&zm,&zs);
	scanf("%lld:%lld:%lld",&sh,&sm,&ss);
	scanf("%lld",&k);
	rz=zh*3600+zm*60+zs;
	rs=sh*3600+sm*60+ss;
	cout<<(rs-rz)*k;
	return 0;
}
