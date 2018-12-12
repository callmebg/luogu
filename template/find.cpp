#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int bsearch(int *a,int x,int y,int v)
{
	int mid;
	while(x<y)
	{
		mid=x+(y-x)/2;
		if(v==a[mid])	return mid;
		else if(v<a[mid])	y=mid;
		else				x=mid+1;
	}
	return -1;
}
int l_bound(int *a,int x,int y,int v)
{
	int mid;
	while(x<y)
	{
		mid=x+(y-x)/2;
		if(v>=a[mid])	y=mid;
		else			x=mid+1;
	}
	return x;
}
int main()
{
	int a[3]={1,2,3};
	cout<<*upper_bound(a,a+3,2);
	cout<<*lower_bound(a,a+3,2);
	return 0;
}
