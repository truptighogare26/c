#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;

};

struct Node *head=NULL;
struct Node  *tail=NULL;


void count(){
    int count=0;
    struct Node *temp=head;
do{
    
             temp=temp->next;
             count++;
        }while(temp != head);
        printf("%d",count);


}
void  addAtpos(int data,int pos){
struct Node *newNode=malloc(sizeof(struct Node));
 newNode->data=data;
 newNode->next=newNode;
                                                       //ethe node nasel tar aani node 1 ch aasel tar he test case handle kara practice chya time la
struct Node *temp=head;
while(pos-2){
    temp=temp->next;
    pos--;
}
newNode->next=temp->next;
temp->next=newNode;                               // ethe count suppose 3 ahe ani tyani 4th pos la add karayla lavlay tar addatlast la call karaychi testcase 
                                                   //handle kara aami suppose 3 node aahet aani 5th node aasel tar msg dya or pos 0 dili tar add first la 
                                                    //call kara
}

void printList(){

struct Node *temp=head;
do{
    if(temp->next!=head)
              printf("|%d|->",temp->data);
        
    else
              printf("|%d|",temp->data);

             temp=temp->next;
        }while(temp != head);

}
void addFirst(int data){
 struct Node *newNode=malloc(sizeof(struct Node));
 newNode->data=data;
 newNode->next=newNode;

 newNode->next=head;
 tail->next=newNode;
 head=newNode;

}
void addLast(int data){
 struct Node *newNode=malloc(sizeof(struct Node));
 newNode->data=data;
 newNode->next=newNode;
 newNode->next=head;
 tail->next=newNode;
 tail=newNode;

}
void deleteFirst(){

    //ethe 1 ch node aasel aani delet karayla sangitli ti aani 2 n ch node aahet ti testcase handla kara
    // ethe temp chi garaj nahi

    head=head->next;
    free(tail->next);
    tail->next=head;

} 
void deleteLast(){
    
    struct Node *temp=head;

    while(temp->next->next!=head){
        temp=temp->next;
    }
    temp->next=head;
    free(tail);
    tail=temp;
    
}
void deleteAtpos(int pos){
    struct Node *temp=head;
 
while(pos-2){

    temp=temp->next;
    pos--;
}
struct Node *temp1=temp->next;
temp->next=temp1->next;                          //with extera pointer aahe ha without extera pointer kara head use kara aani anantar head la bola tuza
free(temp1);
                                                   //tail cha next head aahe
}

void reverse(){                                           //same as singly just while condition changes


    struct Node *temp1=head;
    struct Node *temp2=NULL;
    struct Node *temp3=tail;

while(temp2!=head){
  temp2=temp1->next;
  temp1->next=temp3;
  temp3=temp1;
  temp1=temp2;
}
head=temp3;
tail=temp1;
}

void main(){

    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->data=10;
    newNode->next=newNode;
    head=newNode;
    tail=newNode;
    char ch;

    do {
         
printf("singly circular List\n");
printf("1.printList\n");
printf("2.count\n");
printf("3.addfirst\n");
printf("4.addLast\n");
printf("5.addatpos\n");
printf("6.deleteFirst\n");
printf("7.deleteLast\n");
printf("8.deleteAtpos\n");
printf("9.reverse\n");




int choice;
printf("enter choice:\n");
scanf("%d",&choice);

switch(choice){

    case 1:
               printList();
               break;
    case 2:
                count();
                break;
    case 3:
    {
                int data;
                printf("enter data:\n");
                scanf("%d",&data);
                addFirst(data);
                printList();
    }
           break;
    case 4:
           {
                  int data1;
                  printf("enter data:\n");
                  scanf("%d",&data1);
                  addLast(data1);
                  printList();

           }
           break;
     case 5:
           {
                    int pos;
                  printf("enter pos:\n");
                  scanf("%d",&pos);

                  int data2;
                  printf("enter data:\n");
                  scanf("%d",&data2);
                  addAtpos(data2,pos);
                  printList();

           }
           break;
    case 6:
             {
               deleteFirst();
                  printList();
             }
               break;
     case 7:
             {
               deleteLast();
                  printList();
             }
               break;
    case 8:
           {
                    int pos1;
                  printf("enter pos:\n");
                  scanf("%d",&pos1);
                  deleteAtpos(pos1);
                  printList();

           }
           break;
    case 9:
    {
              reverse();
              printList();
              break;
    }


    default:
          printf("wrong choice\n");
          break;

}
 printf("\ndo you want to continue:\n");
 getchar();
 scanf(" %c",&ch);
 
 

    }while(ch=='Y' || ch=='y');

}
