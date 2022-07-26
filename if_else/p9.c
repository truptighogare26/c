#include<stdio.h>
void main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
     printf("%c is upper case\n",ch);
     else if(ch>=97 && ch<=122)
     printf("%c is lower case\n",ch);
     else
     printf("%c is special character\n",ch);
}