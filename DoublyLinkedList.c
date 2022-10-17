#include<stdio.h>

struct node{

    int data;
    struct node *next;
    struct node *prev;


}*newnode,*tail;

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
        newnode->prev=NULL;
        newnode->next=NULL;
        tail=newnode;

    for(int i=2;i<=n;i++){ //porer node guli toiri
        xnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&data);
        xnode->data=data;
        xnode->prev=tail;
        xnode->next=NULL;

        tail->next=xnode;
        tail=xnode;

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
    newnode->prev=xnode;
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
    xnode->prev=temp;

}

void insertAt(){

    struct node *xnode,*temp;
    xnode=(struct node*)malloc(sizeof(struct node));
    int num,pos,i;
    printf("\nEnter data to insertAt: ");
    scanf("%d",&num);
    xnode->data=num;
    xnode->prev=NULL;
    xnode->next=NULL;
    printf("\nEnter data to insert at the position: ");
    scanf("%d",&pos);

    temp=newnode;
    for(i=0;i<pos-1;i++){
        temp=temp->next;

    }
    xnode->next=temp->next;
    xnode->prev=temp;
    temp->next=xnode;
    (temp->next)->prev=xnode;


}

void deleteFirst(){

    struct node *temp;
    temp=newnode;

    if(temp==NULL){
        printf("List is empty.");
    }
    else{
       newnode=temp->next;
       newnode->prev=NULL;
       free(temp);
    }
}

void deleteLast(){

    struct node *temp;
    temp=newnode;

    while(temp->next!=NULL){

        temp=temp->next;
    }
    (temp->prev)->next=NULL;
    free(temp);
}

void deleteAt(){

    struct node *temp;
    int pos,i;

    temp=newnode;
   // prev=newnode;

    printf("\nEnter position to delete: ");
    scanf("%d",&pos);


    for(i=1;i<=pos-1;i++){
            temp=temp->next;
    }

    (temp->prev)->next=temp->next;
    (temp->next)->prev=temp->prev;
    free(temp);

}

void displayForward(){
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

void displayReverse(){
    struct node *temp;
   // temp=newnode;

    if(tail==NULL){ //head null hole list empty

        printf("List is empty.");

    }
    else{
        temp=tail;
        printf("\nDisplaying data of List: ");
        while(temp!=0){ // list jotokkhon null na hobe

            printf("%d ",temp->data);//temp er data print korbo
            temp=temp->prev;//temp update korbo
        }
    }

}


int main(){

        int n,choice;
        while(1){
            printf("\n\nMENU: \n1)Create\n2)Insert at First position \n3)Insert at Last position \n4)Insert at any Position \n5)delete First node \n6)delete Last node \n7)delete any node \n8)displayfORWARD \n9)displayReverce \n10)Exit");

            printf("\nEnter Choice: ");
            scanf("%d",&choice);
            switch(choice){

                case 1: create(n);
                        break;
                case 2: insertFirst();
                        break;
                case 3: insertEnd();
                        break;
                case 4: insertAt();
                        break;
                case 5: deleteFirst();
                        break;
                case 6: deleteLast();
                        break;
                case 7: deleteAt();
                        break;
                case 8: displayForward();
                        break;
                case 9: displayReverse();
                        break;
                case 10: printf("**********___END___**********");
                        exit(0);
                default:
                    printf("Invalid Choice.");


            }


        }


        return 0;
         }
