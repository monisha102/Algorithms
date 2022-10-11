
#include<stdio.h>

int linerSrch(int arr[],int x){

    int i;
    int isFound=0;

    for(i=0;i<5;i++){

         if(arr[i]==x){

            printf("\nelement found in position %d",i);
            isFound=1;

    }
    }
    if(isFound==0){
        printf("Element not found");
    }
}
int main(){

    int arr[5]={8,9,1,6,2};

    int i,x;


    printf("\nArray : ");

    for(i=0;i<5;i++){

        printf("%d ",arr[i]);

    }

   linerSrch(arr,9);
   printf("\n");
   linerSrch(arr,3);

return 0;
}



