#include<stdio.h>

int main(){

    int n,i,sum=0;

    printf("Enter a number: ");

    scanf("%d",&n);

    for(i=1;i<=n/2;i++){

        if(n%i==0)
            sum=sum+i;
    }
if(sum==n)
    printf("\n%d is a Perfect Number.\n",n);
else
    printf("\n%d is a Not Perfect Number.\n",n);

    return 0;
}
