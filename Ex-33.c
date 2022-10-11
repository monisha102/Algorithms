#include<stdio.h>
#include<math.h>

int xpo(int x,int n){

     if(n<1){
        return -1;
     }
    else
        return pow(x,n);

}

int main(){

int x,n,res;

    printf("Enter x: ");
    scanf("%d",&x);
    printf("\nEnter n: ");
    scanf("%d",&n);
    res= xpo(x,n);
    printf("\n%d^%d is: %d",x,n,res);

return 0;
}
