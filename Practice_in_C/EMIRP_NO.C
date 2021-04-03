/******************************************** Emirps ************************************************
An emirp is a prime number that is also prime when its digits are reversed, and that is not
also a palindrome. For instance, 13 is an emirp because its reversal, 31, is also prime; 23
is not an emirp, even though it is prime, because its reversal, 32, is not prime; and 101 is
not an emirp, even though it is prime, because it is a palindrome.
Your task is to enumerate the emirps below a million; you should strive for maximum speed.
When you are finished, you are welcome to read or run a suggested solution, or to post your
own solution or discuss the exercise in the comments below
****************************************************************************************************/



#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

int check_prime(int );
void check_palin(int );
int rev(int );

int main()
{int N,i;
//clrscr();
printf("Enter EMIRP no. you want to be checked:");
scanf("%d",&N);
check_palin(N);
if(check_prime(N)!=N)
	{printf("\nTHE GIVEN NO.IS NOT PRIME!\n");
	printf("\nSO IT CAN'T BE EMIRP!\n");
//	getch();
	exit(1);}
N=rev(N);
if(check_prime(N)!=N)
	{printf("\nREVERSE OF THE NO. IS NOT PRIME\n");
	printf("\nSO IT CAN'T BE EMIRP!\n");
//	getch();
	exit(1);}

printf("\nGIVEN NO. IS EMIRPH NO.!\n");

//getch();
}
int check_prime(int P)
{int i;
for(i=2;i<P;i++)
	{if((P%i)==0)
	break;
	else
	continue;
	}
return(i);
}

void check_palin(int P)
{if(P==rev(P))
	{printf("\nthe given no. is a palindrome\n");
	printf("\nSO THE NO. CAN'T BE EMIRP\n");
//	getch();
	exit(1);}
else
	printf("the given no. is not palindrome\n");
}

int rev(int P)
{int i,a=0;
for(i=0;P!=0;i++)
	{a=(a*10)+(P%10);
	P=P/10;
	}
return(a);
}
