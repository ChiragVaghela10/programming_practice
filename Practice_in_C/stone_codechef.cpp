#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    long int arr[10001],n,k,i=0,max=-2000000001,max1=-2000000001,max2=-2000000001;
    /*scanf("%ld %ld",&n,&k);
    while(i<n)
        {
            printf("%ld",arr[i]);
            if(arr[i]>max)
                max = arr[i];

            i++;
        }
    i=0;

    if(k==0){
        while(i<n)
            printf("%ld ",arr[i++]);
        return 0;
    }
    else{
        while(i<n){
                arr[i] = max - arr[i];
                if(arr[i] > max1)
                    max1=arr[i];

                i++;
            }
        i=0;
        if(k==1){
            while(i<n)
                printf("%ld ",arr[i++]);
            return 0;
        }
        else if(k%2==0){
            while(i<n){
                arr[i] = max1 - arr[i];
                if(arr[i] > max1)
                    max1=arr[i];

                i++;
            }
        }
    }
    else if(k%2){

    }

*/ printf("%ld",max);
    return 0;
}
