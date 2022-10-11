#include<stdio.h>

struct node{

    int data;
    struct node *next;


}*newnode;

void create(int n){

    int data;
    struct node *xnode,*temp;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    if(n!=0){
        newnode=(struct node*)malloc(sizeof(struct node)); //first node or head toiri
        printf("Enter data for node 1: ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp=newnode;

    for(int i=2;i<=n;i++){ //porer node guli toiri
        xnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&data);
        xnode->data=data;
        xnode->next=NULL;
        temp->next=xnode;
        temp=temp->next;

    }
}
    else{

        printf("List is Empty.");
    }

}
void insertFirst(){
    struct node *xnode,*temp;
    int num;
    xnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insertFirst: ");
    scanf("%d",&num);
    xnode->data=num;
    xnode->next=newnode;
    newnode=xnode;
    temp=newnode;

}

void insertEnd(){

    struct node *xnode,*temp;
    xnode=(struct node*)malloc(sizeof(struct node));
    int num;
     printf("\nEnter data to insertEnd: ");
    scanf("%d",&num);
    xnode->data=num;
    xnode->next=NULL;

    temp=newnode;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=xnode; //list er sheshe xnode k boshay dilam

}

void insertAt(){

    struct node *xnode,*temp;
    xnode=(struct node*)malloc(sizeof(struct node));
    int num,pos,i;
    printf("\nEnter data to insertAt: ");
    scanf("%d",&num);
    xnode->data=num;
    xnode->next=NULL;
    printf("\nEnter data to insert at the position: ");
    scanf("%d",&pos);

    temp=newnode;
    for(i=0;i<pos-1;i++){
        temp=temp->next;

    }
    xnode->next=temp->next;
    temp->next=xnode;


}

void deleteFirst(){

    struct node *temp;
    temp=newnode;

    if(temp==NULL){
        printf("List is empty.");
    }
    else{
       newnode=temp->next;
       free(temp);
    }
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

void deleteAt(){

    struct node *temp,*prev;
    int pos,i;

    temp=newnode;
    prev=newnode;

    printf("\nEnter position to delete: ");
    scanf("%d",&pos);


    for(i=1;i<=pos-1;i++){
            prev=temp;
            temp=temp->next;
    }

    prev->next=temp->next;
    free(temp);

}

void display(){
    struct node *temp;
    temp=newnode;

    if(newnode==NULL){ //head null hole list empty

        printf("List is empty.");

    }
    else{
        printf("\nDisplaying data of List: ");
        while(temp!=0){ // list jotokkhon null na hobe
            printf("%d ",temp->data);//temp er data print korbo
            temp=temp->next;//temp update korbo
        }
    }

}


int main(){

        int n,choice;
        while(1){
            printf("\n\nMENU: \n1)Create\n2)Insert at First position \n3)Insert at Last position \n4)Insert at any Position \n5)delete First node \n6)delete Last node \n7)delete any node \n8)display \n9)Exit");

            printf("\nEnter Choice: ");
            scanf("%d",&choice);
            switch(choice){

                case 1: create(n);
                        break;
                case 2: insertFirst();
                        break;
                case 3: insertAt();
                        break;
                case 4: insertEnd();
                        break;
                case 5: deleteFirst();
                        break;
                case 6: deleteLast();
                        break;
                case 7: deleteAt();
                        break;
                case 8: display();
                        break;
                case 9: printf("**********___END___**********");
                        exit(0);
                default:
                    printf("Invalid Choice.");


            }


        }


        return 0;
         }
