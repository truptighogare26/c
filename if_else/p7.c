#include<stdio.h>
void main(){
 int num=10;
 if(num!=0 && num>0){
     printf("%d is positive no\n",num);
     num=-5;
 }
 if(num<0){
     printf("%d is negative no\n",num);
     num=15;
 }
 if(num%4==0){
     printf("%d is divisible by 4\n",num);
 }

      

}