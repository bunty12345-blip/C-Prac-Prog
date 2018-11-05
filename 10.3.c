#include<stdio.h>
struct time_struct{
  int hour;
  int minute;
  int second;
} t1;
void enter(){
  printf("Enter hour, minutes and second.");
  scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
}
void display(){
  printf("\n%d:%d:%d",t1.hour,t1.minute,t1.second);
}
//write this function only 
void update(){
    t1.second++;
    if(t1.second==60){
     t1.second=0;
     t1.minute++;
   }
   if(t1.minute==60){
    t1.minute=0;
    t1.hour++;
  }
  if(t1.hour==60){
   t1.hour=0;
  }
}
void main(){
 enter();
 update();
 display();

}
