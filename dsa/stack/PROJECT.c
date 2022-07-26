#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct book_list{
          char ch [20][20];
          struct book_list *next1;

 };
 struct student{
     char name[20];
      int roll_no;
      char password[20];
    struct  book_list book1;
     struct student *next2;

 };
 struct book{
    int Book_id;
    char Book_name[20] ;
    char Author_name[20];
    struct book *dsa;


 };
  struct book_list *head1=NULL;
 struct student *head2=NULL;
 struct book *head3=NULL;

void issue_book();

void add_book(){
struct book *temp1=malloc(sizeof(struct book));
struct book *temp2=head3;
int res;
while(temp2->dsa != NULL){
    temp2=temp2->dsa;
}
struct book *temp3=head3;

printf("enter book id: ");
scanf("%d",&temp1->Book_id);
 char ch[20];
 printf("enter book name:  ");
 scanf("%s",ch);

 while(temp3 != NULL){
     res=strcmp(ch,temp3->Book_name);
     if(res==0)
       break;
     temp3=temp3->dsa;
 }
 if(res==0)
   printf("book already\n");
   else{
 strcpy(temp1->Book_name,ch);
 printf("enter authir name:  ");
 scanf("%s",temp1->Author_name);
 temp2->dsa=temp1;
   }
}
int book_list(){
struct book *temp=head3;
while(temp!=NULL){
printf("book id =%d\n",temp->Book_id);
printf("book name =%s\n",temp->Book_name);
printf("book aothoer name =%s\n",temp->Author_name);
temp=temp->dsa;
 printf("\n");
}
}
int search_book(){
     struct book *temp=head3;
     int count=1;
     printf("name of book to remove:");
     char str1[20];
     scanf("%s",str1);
       int res;
     while(temp != NULL){
          res=strcmp(str1,temp->Book_name);
                if(res==0)
                    return count; 
         temp=temp->dsa;
         count++;
     }
  return count;
}

void remove_book(int pos){

struct book *temp=head3;
    while(pos-2){
        temp= temp->dsa;
        pos--;
    }
struct book *temp1=temp->dsa;
temp->dsa=temp1->dsa;
printf("%s is successfully removed\n",temp1->Book_name);
free(temp1);
}
int login(){
struct student *temp=head2;
printf("enter your name:");
char ch[20];
int count=10;
int count1=0;
int num;
scanf("%s",ch);
while(temp !=NULL){
if(strcmp(ch,temp->name)==0){
  count=0;
  num=count1;
   break;
}
temp=temp->next2;
count1++;
}
if(count==0){
char pass[20];
  printf("enter your password book for issue : ");
  scanf("%s",pass);
  char ch1[20];
  strcpy(ch1,temp->password);
  
  if(strcmp(pass,ch1)==0){
    printf("to issue book : ");
    issue_book();
  }
else
   printf("wrong password \n");
}
}
void issue_book(){
 char ch[20];
 book_list();
 printf("enter book to issue: ");
scanf("%s",ch);

}
void create(){
 struct student *node1=malloc(sizeof(struct student));
 struct student *temp1=head2;

 //struct book_list *node2=malloc(sizeof(struct book_list));
//struct book_list *temp11=head1;

//while(temp11->next1 != NULL){
  //temp11 = temp11->next1;
//}

 while(temp1->next2 != NULL){
   temp1=temp1->next2;
 }
   printf("ente student name for account creating: ");
  scanf("%s",node1->name);
  printf("enter your password.");
  scanf("%s",node1->password);
  printf("enter your roll no: ");
  scanf("%d",&node1->roll_no);

  temp1->next2=node1;
  //temp11->next1=node2;

}


void printstudent(){
  struct student *temp1=head2;
  while(temp1 != NULL){
   printf("name : %s\n",temp1->name);
   printf("roll no= %d\n",temp1->roll_no);
   printf("\n\n");
    temp1=temp1->next2;
  }
}
void main(){

    char ch;
 struct book *temp=malloc(sizeof(struct book));
             temp->Book_id=1;
             temp->dsa=NULL;
             head3=temp;
 
 struct student *node1=malloc(sizeof(struct student));
 head2=node1;
 for(int i=0;i<=4;i++){
 create();
 }
struct book_list *node2=malloc(sizeof(struct book_list));
  node2->next1=NULL;
  head1=node2;

  do{
  
    int choice;
    printf("1.add book\n");
     printf("2.book list\n");
     printf("3.remove book\n");
    printf("4.for see student list:\n");
    printf("5.login\n");

     printf("enter choice:\n");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1 :{
           add_book();
           break;
      }
      case 2:{
        book_list();
          break;
      }
      case 3:{
        int count=search_book();
         remove_book(count);
         break;
      } 
      case 4:{
        printstudent();   
        break;
      }
      case 5:{
        login();
        break;
      }
      default:{
          printf("choice doest exis.");
          break;
      }
      }
      printf("do u want to continue:\n");
      getchar();
      scanf("%c",&ch);
      }while(ch == 'y' || ch=='Y');

}
