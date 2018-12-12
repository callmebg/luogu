#include<cstdio>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
typedef long long ll;
const int N = 100005;
int n,m;
ll add[N<<2];
ll sum[N<<2];
void pushup(int rt)
{
    sum[rt]=sum[rt<<1]+sum[rt<<1|1];
}
void pushdown(int rt,int m)
{
    if(add[rt])
    {
        add[rt<<1]+=add[rt];
        add[rt<<1|1]+=add[rt];
        sum[rt<<1]+=add[rt]*(m-(m>>1));
        sum[rt<<1|1]+=add[rt]*(m>>1);
        add[rt]=0;
    }
}
void build(int l,int r,int rt)
{
    add[rt]=0;
    if(l==r)    scanf("%d",&sum[rt]);
    else
    {
        int m=(l+r)>>1;
        build(lson);
        build(rson);
        pushup(rt);
    }
}
void updata(int p,int add,int l,int r,int rt)
{
    if(l==r)    sum[rt]+=add;
    else
    {
        int m=(l+r)>>1;
        if(p<=m)    updata(p,add,lson);
        else        updata(p,add,rson);
        pushup(rt);
    }
}
void updata(int L,int R,int c,int l,int r,int rt)
{
    if(L<=l&&r<=R)  add[rt]+=c,sum[rt]+=c*(r-l+1);
    else
    {
        pushdown(rt,r-l+1);
        int m=(l+r)>>1;
        if(L<=m)    updata(L,R,c,lson);
        if(m<R)     updata(L,R,c,rson);
        pushup(rt);
    }
}
ll query(int L,int R,int l,int r,int rt)
{
    if(L<=l&&r<=R)  return sum[rt];
    pushdown(rt,r-l+1);
    int m=(l+r)>>1;
    ll ret=0;
    if(L<=m)    ret+=query(L,R,lson);
    if(R>m)     ret+=query(L,R,rson);
    return ret;
}
int main()
{
    int a,b,c;
	ll d;
	scanf("%d",&n);
    //scanf("%d%d",&n,&m);
    build(1,n,1);
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&c);
        if(c==1)
        {   scanf("%d%d%lld",&a,&b,&d);
            updata(a,b,d,1,n,1);
        }
        else
        {
            scanf("%d",&a);
            printf("%lld\n",query(a,a,1,n,1));
        }
    }
    return 0;
}
