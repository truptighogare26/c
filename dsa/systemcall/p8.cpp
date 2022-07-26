#include<iostream>

struct player{
char pname[20]="MSD";
int jerno=7;
char cname[20]="india";
float sal=570.00;
};
void passcric(player cric){
std::cout<<cric.pname<<std::endl;
std::cout<<cric.jerno<<std::endl;
std::cout<<cric.cname<<std::endl;
std::cout<<cric.sal<<std::endl;

}
int main(){
 player cric;
 passcric(cric);                     //without object creation struct la jaga kuthe milel karan initilize jalay manje jaga aasel mag ti jaga  


    return 0;
}