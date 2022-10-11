#include<stdio.h>

int main(){

    int n,sum=0,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        sum=sum+(i*(2*i+1));
    }

    printf("Series sum: %d",sum);

    return 0;
}
