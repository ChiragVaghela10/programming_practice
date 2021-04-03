#include <stdio.h>

using namespace std;

int main()
{
    int t,n[1100],fibo[1100],i=0,k,j,max=-1;
    scanf("%d",&t);
    while(i<t)
        {
            scanf("%d",&n[i]);
            if(n[i]>max)
                max=n[i];
            i++;
        }

    fibo[0]=0;
    fibo[1]=1;

    for(i=2;fibo[i-1]<=max;i++)
        fibo[i] = fibo[i-1] + fibo[i-2];

    //printf("%d max:%d\n",i,max);
    for(k=0;k<t;k++)
        {
            for(j=0;j<i;j++)
                {
                    if(n[k]==fibo[j])
                        {
                            printf("YES\n");
                            break;
                        }
                }
            if(j==i)
                printf("NO\n");
        }
    return 0;
}
