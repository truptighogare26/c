/*#include<stdio.h>
void main(){
    char str[50];
    scanf("%c",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i] == 'a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ){
             str[i]="_";
        }
             i++;
    }
    printf("%s",str);

}*/
#include<stdio.h>
int main()
{
    char str[50], ch, i;
    printf("Enter any string: ");
    scanf("[^/]%s",str);
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = "__";
        }

    }
    printf("\nNew String (after replacing vowel with %c) = %s", ch, str);
    
    return 0;
}