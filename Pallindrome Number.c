 #include<stdio.h>

 int main(){

    int n,reverse=0,t;

    printf("Enter a number: ");

    scanf("%d",&n);

    t=n;

    while(t!=0){
        reverse=reverse*10;
        reverse=reverse+t%10;
        t=t/10;

    }
 if(n==reverse){

    printf("\n%d is a Pallindrome Number.\n",n);
 }
 else
    printf("\n%d is Not a Pallindrome Number.\n",n);

 return 0;
 }
