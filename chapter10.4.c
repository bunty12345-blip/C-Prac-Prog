#include<stdio.h>
struct date {
  int day;
  int month;
  int year;
}s;
int leap(){
  if(s.year%400==0)
  return 1;
  else if(s.year%100==0)
  return 0;
  else if(s.year%4==0)
  return 1;
  else
  return 0;
}

void read(){
  printf("Enter day month and year\n");
  scanf("%d%d%d",&s.day,&s.month,&s.year);
}
int validate(){
  if((s.month==1||s.month==3||s.month==5||s.month==7||s.month==8||s.month==10||s.month==12)&& s.day>31)
  return -2;
  else if((s.month==2||s.month==4||s.month==6||s.month==9||s.month==11)&& s.day>30)
  return -4;
  else if(s.month==2 && s.day==29 && !leap())
  return -1;
  else return -5;
  }
void print(){
  int x;
  x=validate();
  if(x==-1)
  printf("%d is not a leap year\n",s.year);
  else if(x==-2)
  printf("%d has 31 days\n", s.month);
  else if(x==-4)
  printf("%d has 30 days \n",s.month);
  else if(x==-5)
  printf("date is %d.%d.%d \n",s.day,s.month,s.year);
  }
  void update(){
    if((s.month==1||s.month==3||s.month==5||s.month==7||s.month==8||s.month==10) && s.day==31){
    s.month++; s.day=1; }
    if(s.month==12 && s.day==31)
    { s.year++; s.month=1; s.day=1; }
    if((s.month==2||s.month==4||s.month==6||s.month==9||s.month==11)&& s.day==30)
    { s.month++; s.day=1; }
    if(leap() && s.day==29)
    {s.month++; s.day=1; }
    else
    s.day++;
  }
  void modifiedINPUT(){
    int date;
    printf("Enter year month and date in format 19450815\n");
    scanf("%d",&date);
    s.year=date/10000;
    date%=1000;
    s.month=date/100;
    date%=100;
    s.day=date;

  }
  void nextDATE(){
    int add,i,k=0,p,a;
    printf("Enter number of days to be added to present date\n");
    scanf("%d",&add);
    int m2[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<s.month;i++)
    k=k+m2[i];
    k=k+s.day+add;
    printf("New Date : ");
    if(k<=365){
      for(i=0;i<13;i++){
        p=k-m2[i];
        if(p<=m2[i+1])
        { a=i+1; break;}
        else
        k=p;
      }
      printf("%d / %d / %d ",p,a,s.year);
    }
    }

  int compareDATE(){ //place return statements in place of printf
    struct date s1;
    printf("\nEnter another date to compare \n");
    scanf("%d%d%d",&s1.day,&s1.month,&s1.year);
    if(s1.year>s.year){
    printf("%d / %d / %d is later date\n",s1.day,s1.month,s1.year); return 0;}
    if(s1.year<s.year){
    printf("%d / %d / %d is later date\n",s.day,s.month,s.year); return 0;}
    if(s1.month>s.month){
    printf("%d / %d / %d is later date\n",s1.day,s1.month,s1.year); return 0;}
    if(s1.month<s.month){
    printf("%d / %d / %d is later date\n",s.day,s.month,s.year); return 0;}
    if(s1.day>s.day){
    printf("%d / %d / %d is later date\n",s1.day,s1.month,s1.year); return 0;}
    else{
    printf("%d / %d / %d is later date\n",s.day,s.month,s.year); return 0;}
  }
  void main(){
    modifiedINPUT();
    print();
    update();
    print();
    nextDATE();
    compareDATE();
  }
