#include<stdio.h>
void main(){
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
   printf("enter elements:\n");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int a;
   printf("enter position os elemsnt:\n");
   scanf("%d",&a);
   for(int i=a-1;i<n;i++){
       arr[i]=arr[i+1];
   }
      for(int i=0;i<n-1;i++){
       printf("%d ",arr[i]);
   }


}