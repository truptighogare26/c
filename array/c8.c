#include<stdio.h>
void main(){
    int arr[7];
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
      arr[i]=arr[i]*arr[i];
        }
}

printf("array");
for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}
printf("\n");
int ans=0;
for(int i=0;i<7;i++){
    if(arr[i]>ans)
    ans=arr[i];
}
printf("biggest element=%d",ans);

    }
