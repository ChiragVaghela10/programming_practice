#include <stdio.h>
using namespace std;

int main()
{
    long long int t,n,m,count,entry,value;
    scanf("%lld",&t);
while(t--)
{
	scanf("%lld %lld",&n,&m);
	entry=1;
	count=0;
	value=m*entry;
    while((2*n-1)/value)
        {
            if(value%2)
                {count += (value-1)/2;}
            else
                {count += (value/2 - 1);}

            if( (value-1)-n > 0)
                {count -= (value-1)-n;}

            entry++;
            value = m * entry;
        }
	printf("%lld\n",count);
}
return 0;
}
