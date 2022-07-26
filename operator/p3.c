#include<stdio.h>
void main(){

   /* int a,y=5,z=5;
     a=(y==z);

    printf("%d\n",a);*/
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int rem=0;
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
}