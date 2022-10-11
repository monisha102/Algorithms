#include<stdio.h>

int main(){

    int n,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>=1){
        printf("\nFactors of %d are: ",n);
        for(i=1;i<=n/2;i++){

            if(n%i==0){
                printf("%d ",i);
            }
    }
    }

    else
        printf("\n %d is not a positive number.",n);

    return 0;
    }
