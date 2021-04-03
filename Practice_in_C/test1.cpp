#include<stdio.h>
using namespace std;
int main()
{
int a=1,b=1,count,t,n,m;
scanf("%d",&t);
while(t!=0)
{
count=0;
scanf("%d%d",&n,&m);
for(a=1;a<=n;a++)
{
for(b=1;b<a;b++)
{
if((a+b)%m==0)
count++;
}
}
printf("%d\n",count);
t--;
}
return 0;
}
