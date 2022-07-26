#include<stdio.h>

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

// way 1
void mystrcpy(char *pName,char *str){                        // mystrcpy n]lihaycha load nka gheu string.h include kara

while(*str !='\0'){
       *pName=*str;
       pName++;
       str++;
}
}
 //way 2
 void mystrcpy(char pName[],char *str){      //ethe yenara pointer aahe aane array itself adreess ch aasto manun to value intilize karto
  int i=0;
  while(*str !='\0'){
      pName[i]=*str;
      i++;
      str++;
  }

}

void main(){
/*
struct Player cric={"virat kohli",18,"India",250.00};
struct Player fb={"messi",10,"argentina",650.00};

struct Player *cptr=&cric;
struct Player *fptr=&fb;


passCric(cptr);
passFb(fptr);
*/

/*void *vptr= malloc(sizeof(struct Player));
struct Player *cptr=(struct player* )vptr;*/

struct Player *cptr=(struct Player*)malloc(sizeof(struct Player));

    mystrcpy(cptr->pName,"virat kohali");
          cptr->jerNo=18;

    mystrcpy(cptr->cName,"india");
    cptr->sal=250.00;

    passCric(cptr);

}