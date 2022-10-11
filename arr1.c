#include<stdio.h>

int main(){

int arr[100];

    int i,pos,n,data;

    printf("Insert array size: ");
    scanf("%d",&n);

    printf("\nEnter Elements: ");

    for(i=0;i<n;i++){

        scanf("%d ",&arr[i]);
    }

    printf("\nArray : ");

    for(i=0;i<n;i++){

        printf("%d ",arr[i]);

    }

    printf("\nEnter position to insert: ");
    scanf("%d",&pos);

    printf("\nEnter data to insert: ");
    scanf("%d",&data);

    for(i=n-1;i>pos-1;i--){

        arr[i+1]=arr[i];
    }
    arr[pos-1]=data;

    printf("\nArray after insertion: ");

    for(i=0;i<n;i++){

        printf("%d ",arr[i]);

    }

    return 0;
    }
