#include<stdio.h>
#include<math.h>

int main(){


    int n,r,i=1;
    long bin=0;

    printf("Enter a decimal number: ");
    scanf("%d",&n);


    while(n!=0){
        r=n%2;
        n=n/2;
        bin=bin+r*i;
        i=i*10;
    }


   printf("binary= %lld",bin);

    return 0;
}
