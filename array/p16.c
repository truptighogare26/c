#include<stdio.h>
void main(){

    int n,n1;
    printf("plz enter size of array:\n");
    scanf("%d",&n);
    printf("plz enter size of second array:\n");
    scanf("%d",&n1);
    printf("\n");
    int arr1[n];
    int arr2[n1];
    printf("enter element of 1st arry\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter element of 2nd arry\n");

        for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    
        for(int i=0;i<n;i++){
         printf("arr1=%d  arr2=%d\n",arr1[i],arr2[i]);
    }

    int count=0;
     for(int i=0;i<n;i++){
            if(arr2[i]==arr1[i]*arr1[i]){
                     count++;
                    
            }
            
              }
                    


              if(count==n)
                  printf("return 1");

}