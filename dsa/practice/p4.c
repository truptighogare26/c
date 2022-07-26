
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

void createextra(int pos){
  struct Node *temp=head;
  while(temp!=NULL){
    temp=temp->next;
  }
      while(pos-1){
      while(temp==NULL){
        struct Node *node=malloc(sizeof(struct Node));
                  temp=node;
                  temp=temp->next=NULL;
      }
      pos--;
      }
      printf("extra node creates:\n");
      printf("calling createnode function to create your position node:\n");
      createnode();

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
void addAtPos(int pos){
  int count=Count();
  struct Node *temp2=head;

  while(pos-2){
    temp2=temp2->next;
  }

 if(count!=0){

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
 if(pos>count){
   printf("calling creatextra function because list have %d node",count);
      int n=pos-count;
      createextra(n);
 }

}
void main(){

  struct Node *node=malloc(sizeof(struct Node ));
  head=node;
  node->data=10;
  node->next=NULL;
  /*
  printNode();


 addAtBeg();
  printNode();
  printf("\n");

  addAtLast();
    printNode();
  printf("\n");
*/
int pos;
printf("enter pos:\n");
scanf("%d",&pos);
addAtPos(pos);
//printNode();
printf("\n");

}