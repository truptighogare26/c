#include<stdio.h>

struct Player{
    char pName[20];
    int jerNo;
    char cName[20];
    float sal;

}bb={"kobe",10,"USA",950.00};

// hole function 
void passCric(struct Player* cric){
printf("%s\n",cric->pName);
printf("%d\n",cric->jerNo);
printf("%s\n",cric->cName);
printf("%f\n",cric->sal);

}
void passFb(struct Player* cric){

printf("%s\n",cric->pName);
printf("%d\n",cric->jerNo);
printf("%s\n",cric->cName);
printf("%f\n",cric->sal);

}

void passBB(){
 printf("%s\n",bb.pName);
printf("%d\n",bb.jerNo);
printf("%s\n",bb.cName);
printf("%f\n",bb.sal);
 

}


void main(){
struct Player cric={"virat kohli",18,"India",250.00};
struct Player fb={"messi",10,"argentina",650.00};

struct Player *cptr=&cric;
struct Player *fptr=&fb;



passCric(cptr);
passFb(fptr);



}