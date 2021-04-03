#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long long int t,n,result[600000],k=0,l,tot=0;
cin>>t;
int i=0;
while(i<t)
{
k=0;
tot=0;
	cin>>n;
	while(n!=0)
	{
		l=n%2;
		if(l==0)
			k++;
		else
		{
			tot+=pow(10,k);
			k++;
		}
		n=n/2;
	}
	tot=tot*2;
	result[i]=pow(2,tot);
	result[i]=result[i]%1000000007;
	i++;
}
for(i=0;i<t;i++)
cout<<result[i]<<endl;
return 0;
}