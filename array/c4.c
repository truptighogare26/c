#include<stdio.h>
int value1(int *arr4,int n){
    int min1=0;
    for(int i=0;i<n;i++){
        int a=*(arr4+i);
      

        if(min1<a)
           min1=a;
    }
   
        return min1;
        }
float value2(float *arr5,int n){
    float min2=0;
    for(int i=0;i<n;i++){
        
        float b=*(arr5+i);
      
        if(min2<b)
           min2= b;
    }
        return min2;
        }
char  value3(char *arr6,int n){
    char min3=0;
    for(int i=0;i<n;i++){
        char d=*(arr6+i);
         printf("%c\n",d);

        if(min3 < d)
           min3= d;
    }

        return min3;
        }

void main(){
    int n;
    int A;
    printf("enter array size: ");
    scanf("%d",&n);
   
    int arr[n];
    float arr1[n];
    char arr2[n];
    printf("1.for int array\n");
           printf("2.for float array\n");
            printf("3.for char array\n");
            printf("enter choice: ");
    scanf("%d",&A);
    
    
    switch (A){
  case 1:
                for(int i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                }
                
            
                int min1=value1(arr,n);
                printf("min=%d",min1);
                break;
 case 2:

                for(int i=0;i<n;i++){
                 scanf("%f",&arr1[i]);
                }
                float min2;
                min2=value2(arr1,n);
                printf("min1=%f",min2);
                break;
case 3:
                  for(int i=0;i<n;i++){
                    scanf("%c ",&arr2[i]);
                  }
                 for(int i=0;i<=n;i++){
                    
                     printf("%c\n",arr2[i]);
                 }

                char min3;
                 min3=value3(arr2,n);
                 printf("min=%c",min3);
                 break;
          
    
defaul:
      printf("plzz choice between 1 2 and 3 u enterd wrong number");         
             break;
    }
}

