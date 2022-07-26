#include<stdio.h>
void main(){
 int a=10;
 int *iptr=a;
 printf(" valiue at iptr =%d\n",*iptr);
 printf("value of a=%d\n",a);
 printf("iptr=%p\n",iptr);
 printf("a add=%p\n",&a);

}
