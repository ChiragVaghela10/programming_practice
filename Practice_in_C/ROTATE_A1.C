/*given the array [1 2 3 4 5 6], a rotation of 2 to the left gives [3 4 5 6 1 2],
 and a further rotation of 2 to the right restores the original array.
If the count is zero or the length of the array, the array should remain
unchanged.If the count is greater than the length of the array, you should
still do the right thing;for instance, a rotation of 8 on the array given
above gives [3 4 5 6 1 2], the same as a rotation of 2.*/
#include<conio.h>
#include<stdio.h>
void main()
{int i,*arr,*ptr,p,N,step;
char c;
clrscr();
printf("Enter the no.(s) in array(input -999 to stop):\n");
for(i=0;*(arr+i-1)!=-999;i++)
	{
	scanf("%d",arr+i);
	}
N=i-1;
new:
for(i=0;i<N;i++)
	{*(ptr+i)=*(arr+i);}
printf("\n(+ive steps for RIGHT rotate & -ive for LEFT rotate)");
printf("\nEnter the steps upto rotate an array:");
scanf("%d",&step);
step = step%N;
if(step>=0)               //PART 1: ROTATION IN RIGHT DIRECTION//
{for(i=0;(i+step)!=N;i++)
	{*(arr+i+step)=*(ptr+i);}
p=i;
for(i=0;i<step;i++)
	{*(arr+i)=*(ptr+p+i);
	}
printf("\n\n");
for(i=0;i<N;i++)
	{printf("%d\t",*(arr+i));}     //PRINTING AN ARRAY//
}


else                     //PART 2: ROTATION IN LEFT DIRECTION//
{for(i=0;(-step)+i!=N;i++)
	{*(arr+i)=*(ptr+(-step)+i);}
p=i;
for(i=0;i<N;i++)
	{*(arr+p+i)=*(ptr+i);}
printf("\n\n");

for(i=0;i<N;i++)
	{printf("%d\t",*(arr+i));}     //PRINTING AN ARRAY//
}
printf("\n\nDO YOU WANT TO ROTATE THE SAME ARRAY MORE?\n");
c=getch();
if(c=='y' || c=='Y')  goto new;


}