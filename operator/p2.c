#include<stdio.h>
void main(){
int a=2;
/*a=++a + ++a;
//printf("%d\n",ans);
printf("%d\n",a); //8*/

 int ans=++a + a++;
 printf("%d\n",ans);
 printf("%d\n",a);

 
}