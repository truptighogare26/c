#include<stdio.h>
void main(){
	
int arr1[5]={1,2,3,4,5};
int arr2[5];

for(int i=0;i<=4;i++){
 arr2[i]=arr1[i];

}
for(int i=0;i<=4;i++){
	printf("arr1[%d]=%d arr2[%d]=%d\n",i,arr1[i],i,arr2[i]);
}
}
