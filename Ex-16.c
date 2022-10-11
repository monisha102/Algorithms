#include<stdio.h>

int main(){

    int A,B,rem1,rem2,t1,t2,count=0;
    long binA=0;
    long binB=0;

    long t3,t4;

    int i=1;
    int j=1;

    printf("Enter A: ");
    scanf("%d",&A);

    printf("\nEnter B: ");
    scanf("%d",&B);

    t1=A;
    t2=B;


 while(t1!=0 && t2!=0){
        rem1=t1%2;
        rem2=t2%2;

        t1=t1/2;
        t2=t2/2;

        binA=binA+rem1*i;
        binB=binB+rem2*j;

        i=i*10;
        j=j*10;
    }

printf("\n%d in Binary,binA= %lld",A,binA);
printf("\n%d in Binary,binB= %lld",B,binB);

t3=binA;
t4=binB;

  while(t3!=0 && t4!=0){
        rem1=t3%10;
        rem2=t4%10;

        if(rem1!=rem2){
            count++;
        }
        t3=t3/10;
        t4=t4/10;
    }

printf("\nTo convert %d to %d, %d digit/s need to change. ",A,B,count);

return 0;
}
