#include<stdio.h>
void main(){
 struct time_struct{
   int hour;
   int minute;
   int second;
 } t1;
 printf("Enter hour, minutes and second .");
 scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
 printf("\n%d:%d:%d",t1.hour,t1.minute,t1.second);
}
