#include<stdio.h>
void main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
   int a=arr[i];
 
   int sum=0;
      while(a!=0){
      int b=a%10;
        int fac=1;
      for(int i=1;i<=b;i++){
          fac*=i;
      }
      sum+=fac;
      a=a/10;
      }
      if(sum==arr[i]){
          printf("%d ",arr[i]);
      }
   }
     

  }
