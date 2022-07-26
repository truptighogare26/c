#include<stdio.h>
#include<stdlib.h>

// practice code
struct Node{
    int age;
    float height;
    struct Node  *next;
};
void main(){
void *vptr1=malloc(sizeof(struct Node));
struct Node *iptr1=(struct Node *)vptr1;

iptr1->age=10;
iptr1->height=20.20;
iptr1->next=NULL;

/*while(iptr1!=NULL){
    printf("%d ",iptr1->age);
    printf("%f ",iptr1->height);
    printf("%p ",iptr1->next);
    iptr1=iptr1->next;
}*/

struct Node *iptr3=iptr1;
void *vptr2=malloc(sizeof(struct Node));
struct Node *iptr2=(struct Node *)vptr2;

iptr2->age=20;
iptr2->height=30.30;
iptr2->next=NULL;

iptr1->next=iptr2;
while(iptr3!=NULL){
    printf("%d ",iptr3->age);
    printf("%f ",iptr3->height);
    printf("%p ",iptr3->next);
    iptr3=iptr3->next;
}
iptr3=iptr1;
iptr2=(struct Node*)malloc(sizeof(struct Node));
iptr2->age=40;
iptr2->height=40.30;
iptr2->next=NULL;
iptr1->next->next=iptr2;

while(iptr3!=NULL){
    printf("%d ",iptr3->age);
    printf("%f ",iptr3->height);
    printf("%p ",iptr3->next);
    iptr3=iptr3->next;
}



}