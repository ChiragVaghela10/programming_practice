#include <stdio.h>
#include <math.h>
using namespace std;
int check_prime(long long int a)
{
    long long int i=2;
    while(i<a/2)
        {
            if(a%i==0)
                break;
            i++;
        }
    if(i==a && a!=1)
        return 1;
    else
        return 0;
}

int main()
{ long long int t,l,r,count,answr,i,num;
scanf("%lld",&t);
while(t--)
{
    scanf("%lld %lld",&l,&r);
    num=l;
    count=answr=0;
    while(num<=r)
        {
            i=1;

            while(i<=num)
                {
                    if(num%i==0)
                        count++;
                    i++;
                }
            if(check_prime(count))
                {answr++;
                printf("num:%lld\n",num);
                }
            num++;
        }
}
printf("%lld\n",answr);
return 0;
}
