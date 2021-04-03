#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    FILE *fp;
    fp=fopen("data.txt","w+");
    long long int t,a,b,count,i,sq;//j=0;
    scanf("%lld",&t);
while(t--)
{
    scanf("%lld %lld",&a,&b);
    count=0;
    i=(int)sqrt(a);
    sq = i*i;
    while(sq<=b)
        {
            if(sq>=a && sq<=b )
            {
                while(sq>0)
                    {
                        if(sq%10==0 || sq%10==1 || sq%10==4 ||sq%10==9)
                            {sq /= 10;}
                        else
                            goto out;
                    }
            }
            out:
            if(sq==0)
                {count++;
                fprintf(fp,"%lld,",i*i);
                }
            i++;
            sq=i*i;
        }
    printf("%lld\n",count);
}
fclose(fp);
return 0;
}
