#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
}
int arr2[n];
int i=n,j=0;
for( i=(n-1),j=0; i>=0; i--,j++)
	{
		arr2[j]=arr[i];
	}

}