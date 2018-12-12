#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double s,a,b,t1,t2;
	cin>>s>>a>>b;
	t1=s*(a-b)/a/(b-b*b/a-(2*b*b-2*a*b)/(a+b));
	t2=(s-t1*b)/a;
	printf("%6lf",t1+t2);
	return 0;
}
