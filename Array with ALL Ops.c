
int main(){

    int arr[100],i,n,pos,data;
    printf("Enter Number of elements: ");
    scanf("%d",&n);

    printf("\nEnter elements:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);//data insert
    }
    printf("\nDisplaying elements of array:\n ");
    for(i=0;i<n;i++){

    printf("%d ",arr[i]);//display array
}
printf("\narray after reverse: \n");
     for(i=n-1;i>=0;i--){

    printf("%d ",arr[i]);//display array
}
printf("\nEnter position to insert data: ");
    scanf("%d",&pos);
printf("\nEnter data: ");
    scanf("%d",&data);

    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=data;
printf("\nDisplaying elements of resultant array:\n ");
    for(i=0;i<=n;i++){

    printf("%d ",arr[i]);
    }
//delete operation
printf("\nEnter position to delete data: ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
printf("\nDisplaying elements of resultant array:\n ");
    for(i=0;i<n-1;i++){

    printf("%d ",arr[i]);
    }

return 0;


}
