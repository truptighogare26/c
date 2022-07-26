#include<stdio.h>
void main(){
int n;
printf("enter size\n");
scanf("%d",&n);
int arr[n];
int a=0;

for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
}

for(int j=0;j<n;j++){
    int ans;
    int final=0;
       a=arr[j];
    while(a!=0){
        ans=a%10;
        final=final*10+ans;
         a=a/10;
    }
    if(final==arr[j])
       printf(" arr[%d]=%d\n",j,final);
        
}

}