#include<stdio.h>


int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);

}
int main(){

    int n,res;

    printf("\nEnter a number: ");

    scanf("%d",&n);

    res=fact(n);

    printf("\n%d! is %d\n",n,res);


return 0;
}
