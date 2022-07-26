#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("1st array\n");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  int a;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               a=arr[i];
               arr[i]=arr[j];
               arr[j]=a;
           }
            }
        
        

    }
    printf("accending array\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}