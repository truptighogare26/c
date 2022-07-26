#include<stdio.h>
void main(){
    int n;
    printf("plz enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    printf("plz eter elemets:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        int count=0;
        for(int j=2;j<=a/2;j++){
            if(a%j==0){
                count++;
            }
        }
        if(count>1){
            for(int k=0;k>n;k++){
                arr1[k]=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++){

        printf("arr=%d arr1=%d \n",arr[i],arr1[i]);
    }
}