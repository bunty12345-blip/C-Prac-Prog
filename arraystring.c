#include<stdio.h>
#include<stdio.h>
void main() {
  char ch[50],ch1; int count=0;
  printf("Enter a line \n");
  gets(ch);
  printf("Enter a character to count occurances\n" );
  scanf("%c",&ch1 );
  for(int i=0;ch[i]!='\0';i++){
    if(ch[i]==ch1)
    count++;
  }
  printf("The character occured %d number of times\n",count );

}
