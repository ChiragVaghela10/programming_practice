/*                         Graplin challenge LEVEL 2
Fibonacci Primes
October 29, 2010
A recent programming challenge asked you to solve the following problem:
Find the smallest prime fibonacci number greater than a given input number.
Add one to that fibonacci prime, find the factors of the result, and return
the sum of the factors.For instance, if the input number is 10, the
smallest fibonacci prime greater than 10 is 13,the factors of 13 + 1 = 14
are 2 and 7, and their sum is 9.Your task is to write a function to
solve that problem, then apply your function to the input number 227000.
When you are finished, you are welcome to read or run a suggested
solution, or to post your own solution or discuss the exercise
in the comments below.*/
#include<stdio.h>
#include<conio.h>
int prime(long int );
void factors(long int );
void main()
{long int i,lim, *arr,j=0,num,loop_lim;
clrscr();
*arr=1;
*(arr+1)=1;
printf("ENTER THE LIMIT:\n");
scanf("%ld",&lim);
for(i=2;j<1;i++)
	{
	*(arr+i)= *(arr+i-1)+ *(arr+i-2) ;
	if(*(arr+i)>lim && prime(*(arr+i))==1)
		{num=*(arr+i);
		j++;
		}
	}
loop_lim=i;
printf("\nFIBONACCI SERIES:");
for(i=0;i<loop_lim;i++)
printf("%ld\t",*(arr+i));
printf("\n\nTHE LEAST FIBONACCI PRIME GREATER THAN LIMIT IS:%ld\n",num);
factors(num+1);
printf("\n\n\nprogram by CHIRAG VAGHELA:\nchiragvaghela10@ymail.com");
getch();
}

int prime(long int p)    //function to check prime//
{long int i;
for(i=2;i<p;i++)
	{if(p%i==0)
	break;
	}
if(i==p)
{return(1);}
else
return(0);
}

void factors(long int p)      // function to make factors of number//
{long int i,sum=0,k;
printf("\n\nFATORS OF %ld ARE:",p);
for(i=2;i<p;i++)
	{if(p%i==0 && p!=0)
		{printf("%ld\t",i);
		sum += i;
		p=p/i;
		i=1;
		}
	}
printf("%ld",p);
printf("\nSUM IS=%ld",sum+p);
}
/*
ENTER THE LIMIT:
227000

FIBONACCI SERIES:1      1       2       3       5       8       13      21
34      55      89      144     233     377     610     987     1597    2584
4181    6765    10946   17711   28657   46368   75025   121393  196418  317811
514229

THE LEAST FIBONACCI PRIME GREATER THAN LIMIT IS:514229


FATORS OF 514230 ARE:2  3       5       61      281
SUM IS=352
*/
