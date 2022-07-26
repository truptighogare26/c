#include<stdio.h>
#include<string.h>
void *malloc(size_t);

struct Player{
    char pName[20];
    int jerNo;
    char cName[20];
    float sal;

};

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

 

void main(){
/*struct Player cric={"virat kohli",18,"India",250.00};
struct Player fb={"messi",10,"argentina",650.00};

struct Player *cptr=&cric;
struct Player *fptr=&fb;



passCric(cptr);
passFb(fptr);*/

/*void *vptr= malloc(sizeof(struct Player));
struct Player *cptr=(struct player* )vptr;*/

struct Player *cptr=(struct Player*)malloc(sizeof(struct Player));

    strcpy(cptr->pName,"virat kohali");
          cptr->jerNo=18;

    strcpy(cptr->cName,"india");
    cptr->sal=250.00;

    passCric(cptr);

}