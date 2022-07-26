#include<stdio.h>
//array madhalya same i and j aastana element 0 kara
void main(){
    int iarr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            printf("%d ",iarr[i][j]);
                     
                     }
                     printf("\n");
    
                 }
    
                   
    for(int i=0;i<3;i++){
                 for(int j=0;j<3;j++){
                     if(i==j){
                 iarr[i][j]=0;
                     }
                     //printf("%d",iarr[i][j]);
                 }
    }
    printf("new array\n");
        for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            printf("%d ",iarr[i][j]);
                     
                     }
                     printf("\n");
    
                 }

}