//wap to input one string and check for palindrome
#include<stdio.h>
#include<string.h>
int palind(char str[80]){
  int j=0; char rev[80];
  for(int i=strlen(str)-1;i>=0;i--){
    rev[j]=str[i];
    printf("%c",rev[j]);
    j++;
  }
  rev[j]='\0';
  if(strcmp(str,rev)==0)
  return 1;
  else
  return 0;
}
void main(){
  char str[80];
  printf("\nEnter a string to check for Palindrome\n");
  scanf("%s",str);
  if(palind(str))
  printf("\nThe string is palindrome\n");
  else
  printf("\nIt is not Palindrome\n");

}
