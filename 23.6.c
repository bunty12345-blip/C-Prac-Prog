#include<stdio.h>
int math(int* x,int* y){
static int w=1;
  if(w==4){
  w++;
  return *x+*y;
  }
  if(w==3){
    w++;
    return *x * *y;
  }
  if(w==2){
    w++;
    return *x / *y;
  }
  if(w==1){
    w++;
    return *x - *y;
  }
}
void main(){
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  int *x=&a,*y=&b;
  printf("\nFive arithmetic operations results are:\naddition=%d\nmultiplication=%d\ndivision=%d\nsubtraction=%d\n",math(x,y),math(x,y),math(x,y),math(x,y));
}
