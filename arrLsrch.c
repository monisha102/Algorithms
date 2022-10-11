
#include<stdio.h>


int main(){

    int arr[5]={8,9,1,6,2};

    int i,x,isfound=0;


    printf("\nArray : ");

    for(i=0;i<5;i++){

        printf("%d ",arr[i]);

    }
    printf("\nEnter element to search: ");
    scanf("%d",&x);

    for(i=0;i<5;i++){
        if(arr[i]==x){

            printf("\nelement found in position %d",i);
            isfound=1;

}

}
if(isfound==0){
    printf("\nElement not found");
}

return 0;
}




