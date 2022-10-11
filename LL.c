#include<stdio.h>

struct node{

        int data;
        struct node *next;

    }*newnode;

void create(){

    int i,n,data;
    struct node *xnode,*temp;

    printf("Enter Size: ");
    scanf("%d",&n);

    if(n!=0){

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for head: ");
    scanf("%d",&data);

    newnode->data=data;
    newnode->next=NULL;
    temp=newnode;

     for(i=1;i<n;i++){

    xnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for nextnode: ");
    scanf("%d",&data);

    xnode->data=data;
    xnode->next=NULL;

    temp->next=xnode;
    temp=temp->next;

    }
    }

    else{

        printf("\nList empty");
    }

        }

void InsertFirst(){

    struct node *xnode,*temp;
    int data;

    xnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for Insert First node: ");
    scanf("%d",&data);

    xnode->data=data;
   // xnode->next=NULL;


    //temp=newnode;
    xnode->next=newnode;
    newnode=xnode;
    temp=newnode;
}

void insertLast(){

    struct node *xnode,*temp;
    int data;

    xnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for Insert Last node: ");
    scanf("%d",&data);

    xnode->data=data;
    xnode->next=NULL;

    temp=newnode;

    while(temp->next!=NULL){

        temp=temp->next;

    }
    temp->next=xnode;
    xnode->next=NULL;


}
void insertIn(){



    struct node *xnode,*temp;
    int data,pos,i;

    xnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data for Insert Last node: ");
    scanf("%d",&data);

    xnode->data=data;
    xnode->next=NULL;

    printf("\nEnter position to insert: ");
    scanf("%d",&pos);

    temp=newnode;

    for(i=1;i<=pos-1;i++){

        temp=temp->next;

    }

    xnode->next=temp->next;
    temp->next=xnode;


}
void deleteFirst(){

    struct node *temp;

    temp=newnode;
    newnode=newnode->next;
    free(temp);




}
void deleteIn(){

    struct node *temp,*prev;
    int pos,i;

    temp=newnode;
    prev=newnode;

    printf("\nEnter position to insert: ");
    scanf("%d",&pos);

    for(i=2;i<=pos+1;i++){

        prev=temp;
        temp=temp->next;
    }

   prev->next=temp->next;
   free(temp);

}

void deleteLast(){

    struct node *temp,*prev;

    temp=newnode;
    prev=newnode;

    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);

}

void display(){

    struct node *temp;

    temp=newnode;

    if(newnode==NULL){
        printf("\nList Empty");

    }
    else{
        printf("\nLinked List: ");
        while(temp!=NULL){

            printf("%d ",temp->data);
            temp=temp->next;

        }
    }

}



int main(){

    create();
    display();
    //InsertFirst();
    //display();
    //insertLast();
    //display();
  //  insertIn();
    //display();
  //  deleteFirst();
    //display();
   // deleteLast();
    //display();
    deleteIn();
    display();


return 0;

}
