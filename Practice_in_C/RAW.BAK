#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int  *set,sub_set=0;


void printc(int comb[], int k,int n)
{
		int i,sum=0,j;
		for (i = 0; i < k; ++i)
		{
			sum=sum+set[comb[i]];
		}


	for(i=0;i<n;i++)
	{
		if(sum==set[i])
			{
					 for (j = 0; j < k; ++j)
					{
						printf("%d\t",set[comb[j]]);
						}
					 printf("%d",set[i]);
					printf("\n"); sub_set++;

			}
		}

}


int next(int comb[], int k, int n) {
	int i = k - 1;
	++comb[i];
	while ((i>=0)&&(comb[i]>=n-k+1+i))
	{
		--i;
		++comb[i];
	}
	if (comb[0]> (n-k))
	{
		return 0;
	}
	for (i=i+1;i<k;++i)
	{
		comb[i]=comb[i-1]+1;
	}
return 1;
}



int main()
 {
	int n,k,i,*comb;
	printf("enter value of n ");
	scanf("\n%d",&n);
	k=n;
	set=(int *)malloc(n*sizeof(int));
	comb=(int *)malloc(k*sizeof(int));

printf("Enter Elements");
for (i = 0;i<n;++i)
	{
	scanf("%d",&set[i]);
	}


	while(k>1)
	{

				for (i=0;i<k;++i)
				{
					comb[i]=i;
				}


				printc(comb, k,n);
				while (next(comb, k, n))
				{
					printc(comb, k,n);
				}
	k--;
	}
	printf("sub sets=%d",sub_set);
	getch();
	return 0;
}
/*3, 4, 9, 14, 15, 19, 28, 37, 47, 50, 54, 56, 59, 61, 70, 73, 78, 81, 92, 95, 97, 99*/