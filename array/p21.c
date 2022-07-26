#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int arr1[n];

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
   
   for(int i=0;i<n;i++){
   int count=0;

       int a=arr[i];
       for(int j=2;j<a/2;j++){
           if(a%j==0)
           count++;
       }
       if(count==0){
         arr1[i]=a;
         for(int k=a;k>n;k++){
             arr[k]=arr[k+1];
         }
       }
         else 
           arr1[i]=0;
   }
   for(int i=0;i<n;i++){
       printf("%d",i);
       printf("arr=%d arr1=%d\n",arr[i],arr1[i]);
   }
}