#include<stdio.h>
#include<stdlib.h>
 
struct Node{
int data;
struct Node *next;

};
struct Node *head=NULL;

void main(){

    struct Node *vptr1= malloc(sizeof(struct Node));
    head=vptr1;
    vptr1->data=10;
    vptr1->next=NULL;

    printf("|%d| |%p|",vptr1->data,vptr1->next);
    printf("\n");

    struct Node *vptr2=malloc(sizeof(struct  Node));
    vptr2->data=20;
    vptr2->next=NULL;
    printf("|%d| |%p|",vptr2->data,vptr2->next);
    printf("\n");

    vptr1->next=vptr2;

    printf("|%d| |%p|",vptr1->data,vptr1->next);
    printf("|%d| |%p|",vptr2->data,vptr2->next);
    printf("\n");

    vptr2=malloc(sizeof(struct  Node));

    vptr2->data=30;
    vptr2->next=NULL;
    printf("|%d| |%p|",vptr1->data,vptr1->next);
    printf("|%d| |%p|",vptr1->next->data,vptr1->next->next);
    printf("|%d| |%p|",vptr2->data,vptr2->next);

    printf("\n");


    vptr1->next->next=vptr2;
    printf("%p\n",vptr2);
    printf("|%d| |%p|",vptr1->next->data,vptr1->next->next);

    printf("|%d| |%p|",vptr2->data,vptr2->next);
    


    

}