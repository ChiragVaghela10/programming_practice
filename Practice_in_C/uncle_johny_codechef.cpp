#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long int t,arr[100]={0},n,k,i,j,value,key;
    cin>>t;
while(t--)
{
    i=0;
	cin>>n;
	while(i<n)
        {
            cin>>arr[i++];
        }
	cin>>k;
	value=arr[k-1];

    for(i=1;i<n;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && key<arr[j])
                {
                    arr[j+1]=arr[j];
                    j--;
                }
            arr[j+1]=key;
        }
    for(i=0;i<n;i++)
        {
            if(arr[i]==value)
                break;
        }
    printf("%lld\n",i+1);
}
return 0;
}
