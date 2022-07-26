// normal queue using array
// 1st try code 
#include<stdio.h>
#include<stdlib.h>
int arr[5];
int front=-1,rear=-1;
void enqueqe(int x){

    if(front==-1)
       front=front+1;
  rear=rear+1;
  arr[rear]=x;
}
void dequeue(){     // 1st in 1st out
 front=front +1;


}
void main(){
    enqueqe(10);
}