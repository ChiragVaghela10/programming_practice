#include <iostream>
#define MODULO 1000000007
using namespace std;

int main()
{
    long long int t,n,result,base;
    cin>>t;
while(t--)
{
    result=1,base=2;
    cin>>n;
    while(n>0)
        {
            if(n % 2 == 1)
                result = (result * base) % MODULO;
            n = n >> 1;
            base = ( base * base ) % MODULO;
        }
    result--;
    cout<<result<<endl;

}
return 0;
}
