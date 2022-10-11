#include<stdio.h>

int main(){

    int num,dcount=0,temp,rem;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){

        rem=temp%10;
        temp=temp/10;
        dcount++;

    }

printf("\nNumber of digits in %d is: %d.",num,dcount);

printf("\n");

return 0;
}
