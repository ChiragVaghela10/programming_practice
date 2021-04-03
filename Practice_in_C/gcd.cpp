#include <stdio.h>

int gcd(int n,int m){
if(n%m==0) return m;
n%=m;
printf("n:%d m:%d\n",n,m);
return gcd(m,n);
}

int main(){
printf("GCD: %d\n",gcd(13,3));
return 0;
}
