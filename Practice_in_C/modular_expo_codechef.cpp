#include <stdio.h>
#include <math.h>
#define MODULO 1000000007
using namespace std;

int main()
{long long int t,n,result,base,value;
unsigned long long n_bin=0;
scanf("%lld",&t);
while(t--)
{
    n_bin=0,value=1;
    result =1, base=2;
    scanf("%lld",&n);
    while(n>0)
        {
            n_bin += (value * (n%2) );
            value *= 10;
            n=n>>1;
        }
    //printf("%llu\n",n_bin);
    while(n_bin>0)
        {
            if(n_bin%2==1)
                result = (result * base) % MODULO;
            n_bin = n_bin >> 1;
            base = (base * base) % MODULO;
        }
    result = (result * result) % MODULO;
    printf("%lld\n",result);
}
return 0;
}
