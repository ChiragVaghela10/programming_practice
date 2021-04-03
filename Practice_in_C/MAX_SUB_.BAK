#include<stdio.h>
void print(int ,int ,int ,int *);

void main()
{int *arr,i=0,j,n,N,k,sum=0,prv_sum=0,low=0,upper=0;
clrscr();
printf("enter the no.s(-999 to stop):\n");

for(i=0;*(arr+i-1)!=-999;i++)
	{scanf("%d",(arr+i));}
printf("\n\n");

n=N=i-1;

for(j=0;j<i-1;j++)
	{printf("%d\t",*(arr+j));}

for(j=0;j<N;j++)
	{for(k=j;k<n;k++)
		{sum += *(arr+k);
		if(k==n-1 && n!=0)
			{if(prv_sum<sum)
				{prv_sum=sum; low=j; upper=n;
				}
			n--; k=j-1; sum=0;
			}
		}
	n=N;
	}
print(prv_sum,low,upper,arr);
getch();
}
void print(int total,int low_lim,int up_lim,int *ptr)
{int i;
printf("\n\n");
for(i=low_lim;i<up_lim;i++)
	{printf("%d ",*(ptr+i));
	}
printf("\nTHE MAX. TOTAL IS:%d",total);
}