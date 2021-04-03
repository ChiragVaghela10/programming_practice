#include<stdio.h>

using namespace std;

int g[51][51]={0},mul[11][11]={0};

int check_overlap(int i, int j, int k, int l){
if((k==i && l==j) || (k==i-1 && l==j) || (k==i && l==j-1) || (k==i+1 && l==j) || (k==i && l==j+1) || (k==i-2 && l==j) || (k==i+2 && l==j) || (k==i && l==j-2) || (k==i && l==j+2) || (k==i-1 && l==j-1) || (k=i-1 && l==j+1) || (k==i+1 && l==j-1) || (k==i+1 && l==j+1)) return 1;
else
    return 0;
}

int mul_plus(int i, int j, int k, int l){
int sum = 0;
sum += (mul[g[i-1][j]][g[k-1][l]] + mul[g[i][j-1]][g[k][l-1]] + mul[g[i][j]][g[k][l]] + mul[g[i][j+1]][g[k][l+1]] + mul[g[i+1][j]][g[k+1][l]]);
return sum;
}

int main(){
int n,m,i,j,k,l,max,temp,p,q,r,s;

scanf("%d %d", &n,&m);
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        scanf("%d", &g[i][j]);
        }
    }

for(i=0; i<10;i++){
    for(j=0; j<10;j++){
        mul[i][j] = i * j;
        }
    }

max = 0;
for(i=1; i<n-1; i++){
    for(j=1; j<m-1; j++){
        for(k=1; k<n-1; k++){
            for(l=1; l<m-1; l++){
               if ( (k+l) > (i+j) && !check_overlap(i,j,k,l) ){
                    temp = mul_plus(i,j,k,l);
                    if( temp > max) max = temp;
               }
            }
        }
    }
}

printf("%d %d %d %d %d", max, p,q,r,s);
return 0;
}


