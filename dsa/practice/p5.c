#include<stdio.h>
#include<stdlib.h>
void fun(int *ab){
    printf("%p",ab);
}
void main(){
    void *vptr=malloc(sizeof(int));
    int *iptr=(int*)vptr;
    printf("%p\n",iptr);

    fun(iptr);
}