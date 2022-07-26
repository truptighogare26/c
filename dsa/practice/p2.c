#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *head=NULL ;

void addAtBeg(){
    struct Node *temp=head;
    struct Node *node=malloc(sizeof(struct Node));
    int data;
    printf("enter data:\n");
    scanf("%d",&data);
        node->data=data;
        node->next=NULL;

        node->next=temp;
        head=node;

    
}

void addAtEnd(){


struct Node *node=malloc(sizeof(struct Node));
struct Node *temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
int data;
printf("enter data:\n");
scanf("%d",&data);

node->data=data;
node->next=NULL;

temp->next=node;


}
int count(){
    struct Node *temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;

    }
    return count;
}

void addAtPos(int pos){

    
    struct Node *node=malloc(sizeof(struct Node));
    struct Node *temp=head;
while(pos-2){
    temp=temp->next;
}
int data;
printf("enter data:\n");
scanf("%d",&data);
node->data=data;
node->next=temp->next;
temp->next=node;


}

void deleteFirst(){
    struct Node *temp=head;
     head=head->next;
     free(temp);
     

}
void deleteLast(){
    struct Node *temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
free(temp->next);
   temp->next=NULL;

}
void printList(){
struct Node *temp=head;

while(temp!= NULL){

    if(temp->next!=NULL)
     printf("|%d|->",temp->data);
   
     else 
      printf("|%d|",temp->data);
     

     temp=temp->next;
}

}

void deleteAtPos(int pos){
struct Node *temp=head;
while(pos-2){
    temp=temp->next;
}
struct Node *temp1=head;
temp1=temp->next;
temp->next=temp1->next;
free(temp1);

}
void main(){

    struct Node *temp=malloc(sizeof(struct Node));
    head=temp;
    temp->data=10;
    temp->next= NULL;
    struct Node *temp1=malloc(sizeof(struct Node));
    temp1->data=20;
    temp1->next=NULL;
    temp->next=temp1;

    temp1=malloc(sizeof(struct Node));
    temp1->data=30;
    temp1->next=NULL;
    temp->next->next=temp1;
     printList();
     printf("\n");
     addAtBeg();
     printList();
     printf("\n");

     addAtEnd();
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
 printf("enter postition:\n");
 scanf("%d",&pos1);

deleteAtPos(pos1);
    printList();
printf("\n");



}