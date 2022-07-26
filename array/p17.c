#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int a;
     int j=n-1;
    for(int i=0,j=n-1;i<=n/2;i++,j--){
            a=arr[i];
            int b=arr[j];
            arr[i]=b;
            arr[j]=a; 
    }
              
    printf("ans\n");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
    
}