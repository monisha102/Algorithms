//153=1^3+5^3+3^3=1+125+27=153

#include<stdio.h>

int main(){

    int n,i,sum=0,count=0,t,r;

    printf("Enter a number: ");
    scanf("%d",&n);

    t=n;

    while(t!=0){

        t=t/10;
        count++;
    }
    t=n;
    while(t!=0){
        r=t%10;
        sum=sum+pow(r,count);
        t=t/10;

    }
if(sum==n){

    printf("\n%d is a Armstrong number.",n);
}
else{
    printf("\n%d is Not a Armstrong number.",n);
}


    return 0;
}
