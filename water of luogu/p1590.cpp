#include <iostream>
using namespace std;
int main ()
{
    int t,j,n,x,ans;
    bool ok;
    cin>>t;
    while(t--)
    {
		ans=0;
        cin>>n;
        for (j=1;j<=n;j++)	//n????
        {
            x=j;
            ok=1;
            while (x)
			{
                  if (x%10==7) {ok=0;break;}
                  x/=10;
            }
            if (ok) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
