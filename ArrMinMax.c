#include<stdio.h>


int main(){

    int arr[5]={8,9,1,6,2};

    int i,position,minpos,maxpos,min,max;

    min=max=arr[0];

    printf("\nArray : ");

    for(i=0;i<5;i++){

        printf("%d ",arr[i]);

    }

    for(i=1;i<5;i++){

       if(arr[i]<min){

        min=arr[i];
        minpos=i;
       }

      else if(arr[i]>max){

        max=arr[i];
        maxpos=i;
       }

    }
    printf("\nMinimum element is %d and minposition is %d",min,minpos);
    printf("\nMaximum element is %d and maxposition is %d",max,maxpos);

return 0;

}
