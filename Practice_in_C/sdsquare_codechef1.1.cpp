#include <stdio.h>
#include <math.h>
inline long long int POW(int p,int n)
{int k;
long long int value=1;
    for(k=0;k<n;k++)
        value *= p;
    return value;
}
using namespace std;
int main()
{
    long long int t,a,b,count,i,j,num,rem,digit,left,sq,right,prev_i=-1;
    scanf("%lld",&t);
while(t--)
{
    scanf("%lld %lld",&a,&b);
    count=digit=rem=0;
    num=a;
    prev_i=-1;
    while(num!=0)
        {
            rem=num%10;
            num /= 10;
            digit++;
        }
    digit--;
    left=a;
    right=0;
        do
        {
            if(rem==0 || rem==1 || rem==4 )
                {
                    right=POW(10,digit);
                    right *= rem+1;
                }
            else if(rem==9)
                {
                    digit++;
                    right=POW(10,digit);
                }
            i=(int)sqrt(left);
            sq = i*i;
            //printf("left:%lld right:%lld rem:%lld %lld %lld\n",left,right,rem,sq,i);
            while(sq<=right)
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
                if(sq==0 && i!=prev_i)
                    {
                        count++;
                        prev_i=i;
                    }
                i++;
                sq=i*i;
            }

            if(rem==1 || rem==2 || rem==3)
                {
                    rem=4;
                    left=POW(10,digit);
                    left *= rem;
                }
            else if(rem==4 || rem==5 || rem==6 || rem==7 || rem==8)
                {
                    rem=9;
                    left=POW(10,digit);
                    left *= rem;
                }
            else if(rem==9)
                {
                    rem=1;
                    left=POW(10,digit);
                    left *= rem;
                }
        }while(right<b);
    printf("%lld\n",count);
}
return 0;
}
