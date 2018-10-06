#include<stdio.h>
#include<math.h>
void sine(float n){
  float denomi,sinx,x1,sinval,accu=0.0001,i;
  n*=(3.142/180.0);
  x1=n;
  sinx=n;
  sinval=sin(n);
  for(i=1;accu<=fabs(sinval - sinx);i++){
    denomi=2*i*(2*i+1);
    x1= -x1 * n * n/denomi;
    sinx = sinx + x1;
  }
  printf("%f\n",sinx);
}
void cosine(float n){
  float denomi,cosx,x1,cosval,accu=0.0001,i;
  n*=(3.142/180.0);
  x1=n;
  cosx=n;
  cosval=cos(n);
  for(i=1;accu<=fabs(cosval - cosx);i++){

        denomi = 2 * i * (2 * i - 1);
        x1 = -x1 * n * n / denomi;
        cosx = cosx + x1;
  }
  printf("%f\n",cosx);
}
void main(){
  float n;
  printf("Enter degrees \n" );
  scanf("%f",&n );
  sine(n);
  cosine(n);
}
