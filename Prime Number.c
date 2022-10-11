//Prime Number: 2,3,5,7,11,13,17...

#include<stdio.h>

int main(){

    int n,i;

    printf("Enter a number: ");
    scanf("%d",&n);


    for(i=2;i<n/2;i++){

        if(n%i==0)
            printf("\n%d is not a prime Number.",n);

        else
        printf("\n%d is a prime number.",n);
    }
return 0;

}
