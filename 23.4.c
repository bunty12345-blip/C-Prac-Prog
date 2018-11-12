//create a function which will accept a string and return number of vowela using pointers.
#include<stdio.h>
int string1(char *ch){
  int count=0;
  for(int i=0;*(ch+i)!='\0';i++){
    if(*(ch+i)=='a'||*(ch+i)=='e'||*(ch+i)=='i'||*(ch+i)=='o'||*(ch+i)=='u'){
      count++;
    }
  }
  return count;
}
void main(){
  char name[50];
  char *p=name;
  printf("\nEnter a string");
  scanf("%s",name);
  int x=string1(p);
  printf("Number of vowels : %d",x);
}
