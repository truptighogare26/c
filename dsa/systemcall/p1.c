#include<stdio.h>
//#include<stdlib.h>    // malloc la erroe yeil stdlib.h nasel tar atleast malloc ch decleration kar
void* malloc(size_t);

void main(){
    int a=20;
  void *vptr= malloc(sizeof(int));
  int *iptr=(int*)vptr;
  *iptr=20;
  printf("%d\n",*iptr);    
 // printf("%d\n",*vptr);      //error

}