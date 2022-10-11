#include<stdio.h>


int main(){

    int arr[5]={1,2,3,4,5};
    int i,x,first,last,mid,isfound=0;
    first=0;
    last=4;
    printf("\nArray : ");

    for(i=0;i<5;i++){

        printf("%d ",arr[i]);

    }
    printf("\nEnter element to search: ");
    scanf("%d",&x);

    while(first<=last){

      mid=(first+last)/2;



         if(x<arr[mid]){
            last=mid-1;

        }
        else if(x>arr[mid]){
            first=mid+1;
        }
        else{
            printf("\nelement found at %d",mid);
            isfound=1;
            break;
        }



    }

    if(isfound==0){
        printf("\nElement not found");
    }

    return 0;

}
