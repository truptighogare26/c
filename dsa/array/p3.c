#include<stdio.h>
//1st and 2nd plane madhalya jya value same aahet tyat +1 karaycha both plane madhe.
void main(){
    int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,16,17,18,19}};
    for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             for(int k=0;k<3;k++ ){
                 printf("%d ",arr[i][j][k]);
             }
             printf("\n");
         }
         printf("\n");
    }
    for(int i=0;i<1;i++){
         for(int j=0;j<3;j++){
             for(int k=0;k<3;k++){
                if(arr[i][j][k]== arr[i+1][j][k]){
                     arr[i][j][k]=arr[i][j][k]+1;
                     arr[i+1][j][k]=arr[i+1][j][k]+1;
                     
                }
             }
             printf("\n");
         }
         printf("\n");
    }
    for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             for(int k=0;k<3;k++ ){
                 printf("%d ",arr[i][j][k]);
             }
             printf("\n");
         }
         printf("\n");
    }
}
