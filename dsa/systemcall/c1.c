#include<stdio.h>
#include<stdlib.h>
void main(){

    void *vptr=malloc(sizeof(int));
    int *iptr=(int *)vptr;
    *iptr=20;
    printf("%d",*iptr);
}
