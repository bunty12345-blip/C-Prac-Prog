#include<stdio.h>
int palid(int n){
  int rem,rev,i=1,copy;
  copy=n;
  while(n!=0){
    rem=n%10;
    rev=n*i;
    i*=10;
    n/=10;
  }
  if(rev==copy)
  return 1;
  else
  return 0;
}
void main(){
  int n;
  printf("Enter a number to check palindrome\n");
  scanf("%d",&n);
  if(palid(n))
  printf("It is palindrome\n" );
  else
  printf("not palindrome\n");

}
