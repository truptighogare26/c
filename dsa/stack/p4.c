#include<stdio.h>
void main(){

    for(int i=1;i<=4;i++){
        int num=i;
        for(int j=4 ;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",num);
             num--;
        }
        printf("\n");
    }
}