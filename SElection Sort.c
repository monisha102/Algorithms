
#include<stdio.h>
#include<conio.h>
int main(){

    int arr[100],n,i,j,min;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("\nEnter elements in array: ");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array: ");

    for(i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++){
            min=i;
        for(j=0;j<n;j++){
            if(arr[j]>arr[min]){
                   min=j;
            }
    if(min!=i){
        min=arr[i];
    }
        }
    }

   printf("\nSorted array:  ");

   for(i=0;i<n;i++){

        printf("%d ",arr[i]);
    }

return 0;
}

