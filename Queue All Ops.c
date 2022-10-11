#include<stdio.h>

#define MAX 5


int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int x){

    if(rear==MAX-1){

        printf("Queue Overflow!");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }

}

void dequeue(){

     if(front==-1 && rear==-1){
        printf("Queue Underflow!");
     }
     else if(front==rear){
        front=rear=-1;
     }
     else{
        printf("\nDequed element: %d",queue[front]);
        front++;
     }




}

void peek(){

     if(front==-1 && rear==-1){
        printf("Queue Underflow!");
     }
     else{
        printf("\nShowing peek element: %d",queue[front]);
     }

}

void display(){

    int i;
    printf("\nDisplaying Queue: ");

    for(i=front;i<rear+1;i++){
        printf("%d ",queue[i]);
    }


}


 int main(){


    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

    display();

    peek();

 return 0;
 }
