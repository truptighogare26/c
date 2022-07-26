#include<stdio.h>
void main(){
  int arr[4]={1,2,3,4};
  int *iptr=arr;
  printf("%d\n",*iptr);
  iptr++;
  printf("%d\n",*iptr);
    iptr+3;
  printf("%d\n",*iptr);


}