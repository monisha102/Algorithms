#include<stdio.h>

int main(){

    int n,i,j;

    printf("Enter a number: ");

    scanf("%d",&n);

    if(n<=1){
        printf("\nNot a prime number.\n");
    }
    printf("Prime Factors: ");
    for(i=2;i<=n/2;i++){

        if(n%i==0){
            for(j=2;j<i/2;j++){

                if(i%j!=0){
                    printf(" %d ",i);
                }


            }
        }

    }
    return 0;
}
