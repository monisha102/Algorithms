//fib series: 0 1 1 2 3 5 8 13 21....

#include<stdio.h>

int fib(int n){

    if(n==0 || n==1) //base case
        return n;
    else
        return fib(n-1)+fib(n-2);

}

int main(){

    int n,fibs,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("\nFibonacci Series: ");
    for(i=0;i<n;i++){

        printf("%d ",fib(i));

    }

    return 0;

}
