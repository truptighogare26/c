#include<stdio.h>
void main(){
int val=15;
if(val++ && val--){
	printf("val =%d\n",val);
}
if(val-- || ++val)
{

printf("val =%d\n",val);
}
if(val>val);{      // its excecutes 

	printf("val =%d\n",val);
}
}
