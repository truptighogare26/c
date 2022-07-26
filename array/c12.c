#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<num;i++){
       int a=arr[i];
        int rem=0;
        while(a){
            rem=a%10;
            if(rem==1){
                count++;
            }
            a=a/10;
        }
    }
    printf("%d",count);

}