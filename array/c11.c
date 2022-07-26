#include<stdio.h>
void main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }    
    for(int i=0;i<size;i++){
        printf("element=%d size=%ld address=%p \n",arr[i],sizeof(arr[i]),&arr[i]);

}   
 }
