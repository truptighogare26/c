#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int ans,a;
    for(int i=0;i<n;i++){
         scanf("%d",&arr1[i]);
            }
     for(int i=0;i<n;i++){
          a=arr1[i];
          ans=1;
          for(int j=1;j<=a;j++){
              ans*=j;
          }
          arr2[i]=ans;
     }

     for(int i=0;i<n;i++){
        printf("1st array=%d  2nd array=%d\n",arr1[i],arr2[i]);
     }

}