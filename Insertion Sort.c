
#include<stdio.h>

int main(){

    int arr[100],n,i,j,temp;

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
    for(i=1;i<n;i++){

       temp= arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

   printf("\nSorted array:  ");

   for(i=0;i<n;i++){

        printf("%d ",arr[i]);
    }

return 0;
}

