#include<stdio.h>

int liner_search(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
           return i;
        }
        else{
            return -1;
        }
    }


}
int main(){

    int arr[]={10,20,25,32,55};

    int i,x,n;

  /*  printf("Enter size of array: ");
    scanf("%d",&n);

    if(n!=0){

        for(i=0;i<n;i++){
            printf("\nEnter data: ");
            scanf("%d",&arr[i]);
        }
    }*/
     printf("\nDisplaying data: ");
     for(i=0;i<5;i++){
            printf("%d ",arr[i]);

        }

    printf("\nEnter data to search: ");
    scanf("%d",&x);





return 0;

}
