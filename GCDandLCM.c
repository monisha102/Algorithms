#include<stdio.h>

int main(){


    int x,y,t,a,b,gcd,lcm;

    printf("Enter a number: ");
    scanf("%d",&x);
    printf("\nEnter anoter number: ");
    scanf("%d",&y);

    a=x;
    b=y;
    while(b!=0){

        t=b;
        b=a%b;
        a=t;
    }
   gcd=a;
   lcm=(x*y)/gcd;

    printf("\nGCD of %d and %d= %d",x,y,gcd);
    printf("\nLCM of %d and %d= %d",x,y,lcm);

    return 0;
}
