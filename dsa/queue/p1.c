#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};
struct Node *head=NULL;

void push(int x){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){
        printf("memory full\n");
        exit(1);    //exit hoil code karan memory full aahe
    }
    newNode->data=x;
    newNode->next=NULL;
if(head==NULL){
     head=newNode;
}else{
    newNode->next=head;
    head= newNode;
}
}
void printStack(){
       struct Node *temp=head;

           while(temp != NULL){     
               printf("%d\n",temp->data);
               temp=temp->next;
           }    
           
           } 
int pop(){                //pop return boolean value void pn lihu shkata pn te muddam int karayla sangtat
       struct Node *temp=head;
       if(head==NULL){
           printf("stack underflow");
           return -1;    //jar tumhala code thambvaycha aasel gar exit kara otherwise return kara
       }
       int x=temp->data;
       head=head->next;
       free(temp);
       return x; // return free nanter liha nahitar free honar nahi temp
  // ethe return 0 1  boolean try kara value ethe ch print kara 
}
void main(){
push(10);
push(20);
push(30);

printStack();

/*pop();
pop();
pop();
pop();   segmentation fault 3 ch element aahet */

int rm;
rm=pop();             // 1 pn data   nasel tar pop la probelme yeil head null aahe ka check kara aadhi manun
printf("pooped ele :%d\n",rm);

rm=pop();     // pop cha call problemetic aahe jara correct way shodha pudhe problem yeu shakato
printf("pooped ele :%d\n",rm);

rm=pop();
printf("pooped ele :%d\n",rm);


}
