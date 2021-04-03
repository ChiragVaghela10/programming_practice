#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
int test(int ,int ,int *);
void main()
{       char ans;
	int i,j,k=0, *arr,low,high,con,N,d,size;
	clrscr();
	printf("do you want to allow repitition? :");
	ans=getchar();
	printf("enter the range:\n");
	scanf("%d%d",&low,&high);
	printf("enter how many no.s you want to generate? :\n");
	scanf("%d",&N); size=2*N;
	arr=(int *)malloc(size);

	if(ans=='y'||ans=='Y' && high-low>0)
	{/*for(i=0;k!=N;i++)
		{
		j=random(high);
		if(j>low)
			{arr[k]=j;
			k++;
			}
		}
	for(i=0;i<N;i++)
		{
		printf("%d\n",arr[i]);
		} */
	}

	else if( high-low>0 )
	{
		if((d=high-low)>0 && d<N)
		{printf("\nwithout allowing repitition you can't generate this much no.(s)");
		goto end;
		}

	for(i=0;k!=N;i++)
		{j=random(high);
		if(j>low && (con=test(j,k,arr))==1)
		{arr[k]=j;
		k++;}
		}
	for(i=0;i<N;i++)
		{
		printf("%d\t",arr[i]);
		}
	}

	else {printf("hmm...! trying to flirt with me...! :D");}
	printf("\n\n*%d*",con);
	end:
	free(arr);
	getch();
}
int test(int a,int b,int *ptr)
	{ int i;
	for(i=0;i<b;)
		{
		if(*(ptr+i)!=a)
			{continue;}
		}

	if(i==b)
	{return (1);}

	else
	{return (0);}

	}

