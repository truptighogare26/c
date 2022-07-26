#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    int i=0;
    int j=0;
    for(i=(n-1),j=0;i>=0;i--,j++){
        arr2[j]=arr1[i];

    }
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
}