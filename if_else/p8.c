#include<stdio.h>
void main(){
    int a,b,c,ans=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        ans=a;
    else if(b>a && b>c)
          ans =b;
    else if(c>a && c>b)
     ans =c;
     
 if(ans%2==0)
 printf("%d is even\n",ans);
 else
 printf("%d is odd\n",ans);

}