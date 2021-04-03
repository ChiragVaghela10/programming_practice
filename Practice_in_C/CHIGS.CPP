#include<iostream.h>
#include<conio.h>
void main()
{
int a[]={3,4,9,14,15,19,28,37,47,50,54,56,59,61,70,73,78,81,92,95,97,99};
int count=0;
clrscr();
for(int i=0;i<22;i++)           //22is total elements
{
 for(int j=i+1;j<22;j++)
    {
    int t1=a[i]+a[j];
    int k=i+j;
    while(k<=22)
    {
    if(t1==a[k])
       {
       cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
       count++;
       break;
       }
    else k++;
    }
    }
 }
 getch();
 }
