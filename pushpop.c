#include<stdio.h>
#define N 5

int top=-1,stk[N];

void push(int n){

    if(top>N-1){
        printf("\nStack overflow");
    }

    else{
        top++;
        stk[top]=n;
    }


}
void pop(){

    if(top<0){
        printf("\nstack Underflow");
    }

    else{
        top--;
    }



}
void display(){

    int i;
    printf("\npresent stack: ");
    for(i=top;i>=0;i--){
        printf("%d ", stk[i]);
    }

    printf("\nElement on top: %d",stk[top]);


}
int main(){

    push(10);
     push(0);
      push(8);
push(77);
       push(5);
        push(9);
          push(9);
    display();
    pop();
    display();

    return 0;

    }
