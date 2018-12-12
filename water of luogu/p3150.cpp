#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a,cout<<(a%2?"zs wins\n":"pb wins\n");
    return 0;
}
