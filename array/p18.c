#include<stdio.h>
void main(){
    int n;
   printf("enter array size\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter elements:\n");
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }

   int a,ans;
  printf("enetr the element to delet:\n");
   scanf("%d",&a);
   for(int i=0;i<n;i++){
       if(a==arr[i]){
            ans=i;
           break;
       }
   }

   for(int i=ans;i<n-1;i++){
            
           arr[i]=arr[i+1];
    

   }
   for(int i=0;i<n-1;i++){
       printf("%d ",arr[i]);
   }
}