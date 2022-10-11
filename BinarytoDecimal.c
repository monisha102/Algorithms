#include<stdio.h>

int main(){


    int n,dec=0,r,i=0;

    printf("Enter a binary number: ");
    scanf("%lld",&n);


    while(n!=0){
        r=n%10;
        n=n/10;
        dec=dec+r*pow(2,i);
        i++;
    }


   printf("decimal= %d",dec);

    return 0;
}
