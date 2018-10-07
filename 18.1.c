//18.1) wapc input one string and perfomr the following operation using switch cases :
//     1.lenght of string without using library func
//     2.lenght using lib func.
//     3.copy one string to another string without using array function
//     4.copy using library function
//     5.exit
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int selfLEN(char[]);
void selfCOPY(char[],char[]);
void main(){
char str1[80],str2[80];
int a,x=1;
printf("\n\tEnter a string ");
scanf("%s",str1);
while(x=1){
printf("\n\t---------------------------MENU-------------------------\n\t1.lenght of string without using library func  \n\t2.lenght using lib func.\n\t3.copy one string to another string without using lib function\n\t4.copy using library function \n\t5.exit ");
scanf("%d",&a);
switch(a){
case 1: printf("\n\tLenght of string = %d",selfLEN(str1)); break;
case 2: printf("\n\tLenght of string = %d",strlen(str1));  break;
case 3: printf("\n\tEnter another string to copy to orignal");
        scanf("%s",str2);
        selfCOPY(str1,str2);
        printf("copied! old string = %s and new string = %s",str1,str2);
        break;
case 4: printf("\n\tEnter another string to copy to orignal");
        scanf("%s",str2);
        strcpy(str2,str1);
        printf("copied! old string = %s and new string = %s",str1,str2);
        break;
case 5:return; break;
}
}
}
int selfLEN(char str[]){
int length=0;
while(str[length]!=0){
length++;
}
return length;
}
void selfCOPY(char str1[],char str2[]){
int i=0;
while(str1[i]!='\0'){
str2[i]=str1[i];
i++;
}
str2[i]='\0';
}
