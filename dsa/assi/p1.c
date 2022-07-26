#include<stdio.h>
#include<stdlib.h>

void main(){
 int a=10;
    void *iptr=malloc(sizeof(int));
    int *ipt1r=(int *)(iptr);
   printf("%d",&a);
   printf("%d",&iptr);  

}
