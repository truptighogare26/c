// normal queue using array

#include<stdio.h>
#define size 5

int queuearray[size];

int front=-1;
int rear=-1;
int isFull(){
 if(rear == size-1)                  // fakat if lihila tar dar time call jato if la return 0 lihila tar size -1 nasel tar 0 return hoto
        return 1;

    return 0;

}
void enqueue(int data){
    /*
    // hya code madhe array empty aasel tari data takel aani to 5th elemet var aasel tari 6 th elements la data takel which is wrong
if(front==-1)
    front++;
rear++;
queuearray[rear]=data;
printf("inserted element : %d\n",data);  // data  insert jalay he samjnya sathi
*/

if(isFull()){
      printf("queue is full\n");
}
if(front==-1)
    front++;
rear++;
queuearray[rear]=data;
printf("inserted element : %d\n",data);
}
int isEmpty(){
if ((rear == -1 && front ==-1)|| rear<front )// fakat 1 elment aasel tari queue empty aahe he sangat nahi 
       return 1;
return 0;

}


void printQueue(){
    if(isEmpty()){
              printf("queue is empty\n");
              return ;
    }
 for(int i=front;i<rear;i++){                         // ethe front -1 aasel tevha pn run hoil bhale garbedge value deil so isempty function la call kara
     printf("|%d|",queuearray[i]);                    // 5 time dequeue la call aasel tar front 5 aani rear 5 aasel false queue empty yayla hav  if (rear == -1 && front ==-1)  
 }
 printf("\n");
}

int dequeue(){
   front++;
}

void main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    printQueue();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
  //  printf("%d\n",front);
   // printf("%d\n",rear);
    
    printQueue();

}
