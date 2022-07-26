#include<stdio.h>
//int sarr[5];
#define size 5

int sarr[size];
int top=-1;
//ethe 5 value yete size chya jagi    gcc E p2.c kara disel  
int isFull(){
         if(top==size-1){

             return 1;       // 1 manje true 0 manje false
         }
         return 0;   // is full full nahi aahe 
}       
int isEmpty(){

    
}

void push(int data){
      //if(top==size-1)
      if(isFull()) {
          printf("stack is overfull\n");
          return ;
      }
      top++;
      sarr[top]=data;
}
int pop(){
    if(top==-1){
        printf("stack uderflow\n");
        return -1;                  //ha return -1 or 0 aasel tar retrun hich value hote  pn aapan main madhe top chi condition didli manun he solve zala
    }

          top--;
          return sarr[top+1];
}
void printstack(){
   for(int i=top;i>=0;i--){

printf("%d\n",sarr[i]);
   }
}

void main(){
    char ch='n';
        do{

          printf("1.push\n");
          printf("2.pop\n");
          printf("3.printstack\n");
               printf("enter your choice:\n");
               int choice=0;
               scanf("%d",&choice);

               switch(choice){
        case 1:{
             int data;
             printf("enter data:\n");
             scanf("%d",&data);
                push(data);
                    break;
             }
         case 2:
         { 
                     int rm;
                     rm=pop();
                         if(top != -1)
                     printf("%d is poped\n",rm);         
                     break;
         }
        case 3:
                  printstack();
                  break;
         default:
                     printf("wrong choice:\n");
                     break;         
               }
               printf("\ndo you want to continue?:\n");
               getchar();
               scanf("%c",&ch);

        }while(ch =='y' || ch=='Y');

}