#include<stdio.h>

int main(){

    int n,rem,temp,count=0;
    n=1288734858;
    int d=8;

    temp=n;

    while(temp!=0){

        rem=temp%10;
        if(rem==d){
            count++;
        }
        temp=temp/10;
    }

printf("\nNumber of occurences of digit 8 is %d in %d.",count,n);



return 0;
}
