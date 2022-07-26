#include<stdio.h>
#include<stdlib.h>

struct Node {
 int data;
 struct Node *next;
};
struct Node *head=NULL;

int Count(){
  int count=0;
  struct Node *temp=head;

  while(temp!=NULL){
    count++;
    temp=temp->next;
    
  }
  return count;
}
void reverse(){
  int count=Count();
struct Node *temp1=head;
struct Node *temp2=NULL;
struct Node *temp3=NULL;
while(temp1 != NULL){
    temp2=temp1->next;
    temp1->next=temp3;
    temp3=temp1;
    temp1=temp2;
}
head=temp3;

}

void printNode(){
  int count=Count();
 struct Node *temp=head;
 if(count!=0){
 while(temp !=NULL){

   if(temp->next!=NULL)
     printf("|%d|->",temp->data);
     else
     printf("|%d|",temp->data);
       temp=temp->next;
 }
 }
 else
    printf("linklist had 0 node");


}
void createnode(){
  struct Node *node=malloc(sizeof(struct Node ));
  head=node;
  int data;
  printf("enter data:\n");
  scanf("%d",&data);
  node->data=data;
  node->next=NULL;

}
void addAtBeg(){
  int count=Count();
  if(count!=0){
  struct Node *node=malloc(sizeof(struct Node ));
       int data;
       printf("enter data:\n");
       scanf("%d",&data);
       node->data=data;
       node->next=head;
       head=node;
  }
  else {
    printf("there are 0 nodes\n");
    printf("calling create node function to create single node:\n");
    createnode();
  }
}

void addAtLast(){
  int count=Count();

  if(count!=0){
  struct Node *node=malloc(sizeof(struct Node ));
     
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

  else{
    printf("there is 0 nodes:\n");
    printf("calling createnode function to create node:\n");
    createnode();
  }
}
void addAtPos(int pos){
 
  struct Node *node=malloc(sizeof(struct Node ));
    struct Node *temp=head;
    while(pos-2){
      int count=Count();
      temp=temp=temp->next;
    }

    node->next=temp->next;
    int data;
    printf("enter data:\n");
    scanf("%d",&data);
    node->data=data;
    temp->next=node;
  }

void main(){

  struct Node *node=malloc(sizeof(struct Node ));
  head=node;
  node->data=10;
  node->next=NULL;
  
  printNode();


 addAtBeg();
  printNode();
  printf("\n");

  addAtLast();
    printNode();
  printf("\n");

int pos;
printf("enter pos:\n");
scanf("%d",&pos);
addAtPos(pos);
printNode();
printf("\n");

reverse();
printNode();
printf("\n");

}