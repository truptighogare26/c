#include<stdio.h>
#include<stdlib.h>

int x=10;                                         //data section var jaga
/*int *iptr1=NULL;
iptr1=(int *)malloc(sizeof(int));                     iptr hota numm aata tyala bghayla konakade sangtoy tya jage kade ---gloable nahi chalat 
*/

void fun(){
  int z=30;                                         //fun chya stack var jaga
  int *iptr2=NULL;
  int *iptr2=(int *)malloc(sizeof(int));
}

void main(){
   int y=20 ;                                                      //main chya stack var jaga
   int *iptr3=NULL;
  int *iptr3=(int *)malloc(sizeof(int));

   fun();
}
