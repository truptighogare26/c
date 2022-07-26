#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    for( int i=2;i<=n/2;i++){
        if(n%i==0){
            flag++;
        }
        if(flag>0){
            printf("%d is not prime",n);
        }
        else 
        printf("%d is prime \n",n);
    }
}