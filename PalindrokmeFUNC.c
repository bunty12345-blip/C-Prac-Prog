#include<stdio>
int palid(int n){
  int copy=n,count=0;
  while(n!=0){
    n/10;
    count++;
  }
  n=copy;
  while(n!=0){

  }

}
void main(){
  int n
  printf("Enter a number to check palindrome\n");
  scanf("%d\n",&n );
  if(palid(n))
  printf("It is palindrome\n" );
  else
  printf("not palindrome\n", );
}
