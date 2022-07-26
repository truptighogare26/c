#include<stdio.h>
int x=10;
void main(){
// static int x=10;   //data section var jaga milate varibale static or global aastana
int *iptr=&x;
printf("%d",*iptr);

}
