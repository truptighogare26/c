#include<stdio.h>
#include<stdlib.h>


struct Node{
struct Node *prev;
int data;
 struct Node *next;

}; 

struct Node* head=NULL;

void addFirst(){
struct Node *newnode=malloc(sizeof(struct Node));
     
      int data;
       printf("enter data:\n");
       scanf("%d",&data);

    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;

   newnode->next=head;
   head->prev=newnode;
   head=newnode;
}


void addLast(){

struct Node *temp=head;
struct Node *newnode=malloc(sizeof(struct Node));
int data;

    printf("enter data:\n");
    scanf("%d",&data);

    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;

while(temp->next!=NULL){
temp=temp->next;

}
temp->next=newnode;
newnode->prev=temp;


}

void printList(){

 struct Node *temp=head;
   while(temp != NULL){
       if(temp->next != NULL)
      printf("|%d|->",temp->data);
      else
      printf("|%d|",temp->data);
         
      temp=temp->next;
 }
}

void addAtPos(int pos){
struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
   

    int data;

    printf("enter data:\n");
    scanf("%d",&data);
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;

    struct Node *temp=head;
    while(pos-2){                           //pos-2 n lihita code liha

        temp=temp->next;
        pos--;
    }

 newNode->prev=temp;
 newNode->next=temp->next;
 temp->next=newNode;
 newNode->next->prev=newNode;


}


void deleteFirst(){

    struct Node *temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
  
}


    void deleteLast(){

        struct Node *temp=head;
        while(temp->next != NULL){

            temp=temp->next;
        }

    temp->prev->next=NULL;
    free(temp);
    }

   void deleteAtPos(int pos1){
    struct Node *temp=head;

    while(pos1-1){

        temp=temp->next;
        pos1--;
    }
 temp->prev->next=temp->next;
 temp->next->prev=temp->prev;
 free(temp);


   }

void main(){


    struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
    head=newNode;

    int data;

    printf("enter data:\n");
    scanf("%d",&data);
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;

    printList();
    printf("\n");

    addFirst();
    printList();
    printf("\n");

    addLast();
    printList();
    printf("\n");


int pos;
printf("enter position:\n");
scanf("%d",&pos);
   addAtPos(pos);
    printList();

    printf("\n");

    deleteFirst();
    printList();
    printf("\n");


    deleteLast();
    printList();
    printf("\n");

int pos1;
printf("enter position:\n");
scanf("%d",&pos1);
   deleteAtPos(pos1);
    printList();


    
}
