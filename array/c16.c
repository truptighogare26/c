#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
    int count=0;

        int a=arr1[i];
        for(int i=2;i<=a/2;i++){
            if(a%i==0)
            count++;
        }
        if(count==0)
           printf("%d is prime\n",arr1[i]);
    }
    for(int i=0;i<n;i++){
       printf("%d",arr1[i]);
    }
    
}