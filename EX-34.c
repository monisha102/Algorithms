#include<stdio.h>

int secMax(int a[],int n){

    int max,max2;
    max=max2=a[0];

    int i;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>max2){
            max2=a[i];
        }
    }
return max2;
}

/*int secMin(int a[],int n){

    int min,min2;
    min=min2=a[0];

    int i;
    for(i=0;i<n;i++){
        if(a[i]<min){
            min2=min;
            min=a[i];
        }
        else if(a[i]<min2 && a[i]>min){
            min2=a[i];
        }
        return min2;
    }*/

int main(){

int arr[100],i,n,max2,min2;

printf("Enter number of elements in array: ");
scanf("%d",&n);
printf("\nEnter elements in array: ");
for(i=0;i<n;i++){

    scanf("%d",&arr[i]);
}


printf("\nElements are: ");
for(i=0;i<n;i++){

    printf("%d ",arr[i]);
}

max2=secMax(arr,n);
//min2=secMin(arr,n);


printf("\nSecond heighst element is: %d",max2);
printf("\nSecond lowest element is: %d",min2);


printf("\n");


    return 0;
}
