#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;

};
struct Node* head=NULL;
void addAtEnd(int a){

    struct Node *node=(struct Node*)malloc(sizeof(struct Node));

    node->data=a;
    node->next=NULL;
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
   temp->next=node;
}

void count(){
    struct Node* temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;

    }
    printf("%d\n",count);
}

void addAtBeg(){
struct Node* temp=head;

struct Node *node=(struct Node*)malloc(sizeof(struct Node));

node->data=20;
node->next=NULL;
node->next=head;
  head=node;                             //ethe yumhi  head change kela tar to ya stack purta limited aasto pop zali ki samapali goshat ethe head la global
                                         // kara or jar tumhi head cha pointer takla tar tumhala double pointer lagel karan to swata pointer aahe 
 



}

void printNode() {            
                                    //head gloabla aahe so para manun pass karaychi garaj nahi aahe

    struct Node *temp=head;

    while(temp!=NULL){
               if(temp->next!=NULL)
              printf("|%d|->",temp->data);
    else
           printf("|%d|\n",temp->data);

    temp=temp->next;
    }
}

void addAtPos(int pos){
  struct Node *temp=head;
  struct Node *newNode=malloc(sizeof(struct Node));
  newNode->data=25;
  newNode->next=NULL;
  while(pos-2){
      temp=temp->next;
      pos--;
  }
  newNode->next=temp->next;
  temp->next=newNode;

}

void deleteFirst(){

    struct Node *temp=head;
    head=head->next;
    free(temp);
    //printf("%d",temp->data);    free zala tar 0 dakhavato karan position aaste pn data uslela aasto
}

void deleteLast(){

    struct Node *temp =head;

    while(temp->next->next !=NULL){
     temp = temp->next;

    }

    free(temp->next);
    temp->next =NULL;
}


void deleteAtPos(int pos){
    struct Node *temp=head;
    while(pos-2){
        temp= temp->next;
        pos--;
    }


struct Node *temp1=temp->next;
temp->next=temp1->next;
free(temp1);
}
void main(){


    struct Node *node1=(struct Node*)malloc(sizeof(struct Node));
    head=node1;
    node1->data=10;
    node1->next=NULL;

    //1.printNode()

 printNode();
 printf("\n");

    //2.addAtBeg
addAtBeg();
printNode();
count();
 printf("\n");

int a;
printf("enter data\n");
scanf("%d",&a);
    //addAtEnd(a);
 addAtEnd(a);
 printNode();
 printf("\n");



  
  printf("enter data\n");
 scanf("%d",&a);
 addAtEnd(a);
  printNode();
  
  //addAtPos

  int pos;
  printf("give position\n");
  scanf("%d",&pos);
  addAtPos(pos);
  printNode();

// deleteFirst
 deleteFirst();
  printNode();

//deletelast
 deleteLast();
  printNode();

//deleteAtPos
int pos1;
printf("enter pos1\n");
scanf("%d",&pos1);
deleteAtPos(pos1);
printNode();



}