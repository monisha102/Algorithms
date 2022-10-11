#include<stdio.h>

#define MAX 5

int q[MAX];
int front=-1;
int rear=-1;


void enqu(int x){

    if(front==-1 && rear==-1){
        front=rear=0;
        q[rear]=x;
    }
    else if((rear+1)%MAX==front){

        printf("\n Queue Overflow!");
    }
    else{

        rear=(rear+1)%MAX;
        q[rear]=x;
    }


}

void dequ(){


    if(front==-1 && rear==-1){

        printf("Queue Empty.");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("\nDequed Element: %d",q[front]);
        front=(front+1)%MAX;
    }

}


void display(){

int i=front;

  if(front==-1 && rear==-1){

        printf("Queue Empty.");
    }
else{

    printf("\nDisplaying Circular Queue: ");
    while(i!=rear){
        printf("%d ",q[i]);
        i=(i+1)%MAX;
    }
    printf("%d ",q[rear]);
    }

}

void peek(){
    printf("\nShowing peek element: %d",q[front]);

}
int main(){

    enqu(2);
    enqu(-1);
    enqu(5);
    enqu(6);
    enqu(7);
    display();
    dequ();
    display();
    dequ();
    display();
    enqu(0);
    display();
    enqu(10);
    display();
    enqu(11);

    return 0;
}
