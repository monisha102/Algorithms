#include<stdio.h>

int main(){

    int i,n,min,max,sum=0,total,avg;



    printf("Enter total number: ");
    scanf("%d",&total);

    printf("\n\nEnter numbers: ");

    min=n;
    max=n;
    avg=n;

    for(i=1;i<=total-1;i++){

        scanf("%d",&n);
        if(n<min)
            min=n;
        else if(n>max)
            max=n;
        sum=sum+n;

    }
     printf("\n\nSmallest number is %d.",min);
     printf("\n\nLargest number is %d.",max);
     printf("\n\nAverage of numbers is %d.",sum/total);

return 0;

}
