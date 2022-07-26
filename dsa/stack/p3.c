//stack using linkedlist 
//1st approach add last and delete upper

//stack madhe saglyat varati aasto tyala top boltata
//struct la point karnara struct type cha pointer aasto
#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;

};
struct Node *head=NULL;
struct Node *top=NULL;


void push(int data){
  struct Node *newNode=malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->next=NULL;

top=newNode;
  if(head == NULL){
      head =newNode;

      // top = newNode ethe top lihila tar to else madhe pn lihayla lagla aasta karan sagla code if madhe jail aasa nahi else madhe pn janara aahe.

  }else{
 struct Node *temp =head;
 while(temp->next != NULL){
     temp=temp->next;
 }
temp->next= top;        //top last la aasel na manje saglyat varati aasnar aahe

  }
}
void printStack(){
struct Node *temp=head;
struct Node *top;



}
void main(){

  push(10);
  push(20);
  push(30);


}