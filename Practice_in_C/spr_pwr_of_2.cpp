#include <stdio.h>
#include <math.h>

#define MODULO 1000000007
#define TWO_POW_60 536396504
#define TWO_POW_30 73741817

using namespace std;

int main()
{long long int t,n=0,n_bin,value=1,powr=0;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld",&n_bin);
    while(n_bin>0)
    {
        n += (int)pow(10,powr++) * (n_bin%2);
        n_bin /= 2;
    }
    n *= 2;

    while(n>0)
        {
            if(n>=60)
                {
                    value *= TWO_POW_60;
                    n -= 60;
                    value %= MODULO;
                }
            else if(n>=30)
                {
                    value *= TWO_POW_30;
                    n -= 30;
                    value %= MODULO;
                }
            else
                {
                    value *= (int)pow(2,n);
                    n -= n;
                    value %= MODULO;
                }
        }
    printf("%lld\n",value);
    powr=n=0; value=1;
}
return 0;
}
