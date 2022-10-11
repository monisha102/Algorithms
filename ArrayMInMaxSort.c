#include<stdio.h>


int main(){

    int arr[100],n,i,j,min,max,sorted[100],temp;

    min=arr[0];
    max=arr[0];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("\n\nEnter elements in the array: ");

    for(i=0;i<n;i++){

        scanf("%d",&arr[i]);

        if(arr[i]<min)
            min=arr[i];

        else if(arr[i]>max)
            max=arr[i];


    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i ;j++){

    if(arr[j]>arr[j+1]){
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
    }

}
    }

    printf("\n\nSmallest element in array: %d",min);
    printf("\n\nLargest element in array: %d",max);
    printf("\n\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }



return 0;
}
