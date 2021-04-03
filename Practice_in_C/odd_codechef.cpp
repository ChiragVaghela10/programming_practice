#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    long long int count,t,num,ans;
    scanf("%lld",&t);
    while(t--)
        {
            count=0;
            scanf("%lld",&num);
            while(num!=1)
                {
                    num /= 2;
                    count++;
                }
            ans = (int)pow(2,count);
            printf("%lld\n",ans);
        }
    return 0;
}
