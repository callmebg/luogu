#include<cstdio>
#include<iostream>
using namespace std;
int cb[16]={0};
bool f=true;
char c;
bool judge(bool f)
{
	if(f)
	{
		if((cb[1]==1&&cb[2]==1&&cb[3]==1)||(cb[4]==1&&cb[5]==1&&cb[6]==1)||(cb[7]==1&&cb[8]==1&&cb[9]==1)||(cb[1]==1&&cb[5]==1&&cb[9]==1)||(cb[3]==1&&cb[5]==1&&cb[7]==1)||(cb[1]==1&&cb[4]==1&&cb[7]==1)||(cb[2]==1&&cb[5]==1&&cb[8]==1)||(cb[3]==1&&cb[6]==1&&cb[9]==1))
		return true;
	}
	else
	{
		if((cb[1]==2&&cb[2]==2&&cb[3]==2)||(cb[4]==2&&cb[5]==2&&cb[6]==2)||(cb[7]==2&&cb[8]==2&&cb[9]==2)||(cb[1]==2&&cb[5]==2&&cb[9]==2)||(cb[3]==2&&cb[5]==2&&cb[7]==2)||(cb[1]==2&&cb[4]==2&&cb[7]==2)||(cb[2]==2&&cb[5]==2&&cb[8]==2)||(cb[3]==2&&cb[6]==2&&cb[9]==2))
		return true;
	}
	return false;
}
int main()
{
	while(scanf("%c",&c)&&c>='0'&&c<='9')
	{
		if(f)
		{
			cb[c-'0']=1,f=false;
			if(judge(true))
			{
				printf("xiaoa wins.");
				return 0;
			}	
		}
		else
		{
			cb[c-'0']=2,f=true;
			if(judge(false))
			{
				printf("uim wins.");
				return 0;
			}		
		}			
	}
	printf("drew.");
	return 0;
}
