#include<stdio.h>
void* malloc(size_t);
void main(){

void *vptr=malloc(3* sizeof(int));
int *iptr=(int*) vptr;
int x=10;
for(int i=0;i<=2;i++)
{

    *iptr=x;
    x=x+10;
    iptr++;
}
 int *iptr1=(int*) vptr;
for(int i=0;i<=2;i++){
    printf("%d\n",*iptr1);
    iptr1++;
}
}