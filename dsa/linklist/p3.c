#include<stdio.h>
#include<stdlib.h>
struct Node{
    int age;
    float sal;
    struct Node *next;
};
void main(){

void *vptr1=malloc(sizeof(struct Node));
struct Node *iptr1=(struct Node*)vptr1;

iptr1->age=10;
iptr1->sal=20.002;
iptr1->next=NULL;

printf("%d ",iptr1->age);
printf("%f ",iptr1->sal);
printf("%p ",iptr1->next);
printf("\n");

void *vptr2=malloc(sizeof(struct Node));
struct Node *iptr2=(struct Node*)vptr2;

iptr2->age=20;
iptr2->sal=30.002;
iptr2->next=NULL;
iptr1->next=iptr2;

struct Node *iptr3=NULL;
iptr3=iptr1;

while(iptr3!=NULL){
printf("%d ",iptr3->age);
printf("%f ",iptr3->sal);
printf("%p ",iptr3->next);
   iptr3=iptr3->next;
}
printf("\n");
  
  iptr2=(struct Node*)malloc(sizeof(struct Node));
iptr2->age=30;
iptr2->sal=40.002;
iptr2->next=NULL;
iptr1->next->next=iptr2;
iptr3=iptr1;

while(iptr3!=NULL){
printf("%d ",iptr3->age);
printf("%f ",iptr3->sal);
printf("%p ",iptr3->next);
   iptr3=iptr3->next;
}
printf("\n");








}