#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
long long int t,n,m,i,j,k,count=0;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
	scanf("%lld %lld",&n,&m);
	count=0;
	for(j=1;j<=n;j++)
	{
		for(k=j+1;k<=n;k++)
		{
			if((k+j)%m==0)
			count++;
		}
	}
	printf("%lld",count);
}
return 0;
}
