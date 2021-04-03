#include<stdio.h>
using namespace std;
int main()
{
long long int a=1,b=1,count,t,n,m;
scanf("%lld",&t);
while(t!=0)
{
count=0;
scanf("%lld%lld",&n,&m);
for(a=1;a<=n;a++)
{
for(b=1;b<a;b++)
{
if((a+b)%m==0)
count++;
}
}
printf("%lld\n",count);
t--;
}
return 0;
}
