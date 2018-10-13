//wapc to input a sentence and check how many alphabets digits or words (space should not count)
#include<stdio.h>
void main(){
  char str[80]; int i=0,number=0,letter=0,word=1;
  printf("Enter a sentence(every alone sequence of string/character/number is treated as a word).");
  gets(str);
  while(str[i]!='\0'){
    if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=123))
    letter++;
    if(str[i]==' ')
    word++;
    if(str[i]>=48 && str[i]<=58)
    number++;
    i++;

}
printf("\n Number = %d\n Words = %d\n Letters = %d",number,word,letter);
}
