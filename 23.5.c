#include<stdio.h>
int* largest(int* x,int* y){
  if(*x>*y)
  return x;
  else
  return y;
}
void main(){
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  int *x=&a,*y=&b;
  printf("\nLargest number is: %d",*(largest(x,y)));
}
