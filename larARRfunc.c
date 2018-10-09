#include<stdio.h>
int FUNC(int arr[],int n){
static int count;
  //sorting the array
  int small,pos,tmp;
 for(int i=0;i<n-1;i++){
   small=arr[i];
   pos=i;
   for(int j=i+1;j<n;j++){
     if(arr[j]<small){
       small=arr[j]; pos=j;
     }
     tmp=arr[i];
     arr[i]=arr[pos];
     arr[pos]=tmp;
   }
 }
 if(count==-1){
   return arr[0];;
 }
 else{
count=-1;
return arr[n-1];}
}
void main(){
  int a,arr[50],i;
  printf("\nEnter lenght of array");
  scanf("%d",&a);
  printf("\nEnter elements");
  for(i=0;i<a;i++)
  scanf("%d",&arr[i]);
  printf("\nLargest element is %d",FUNC(arr,a));
  printf("\nSmallest element is %d",FUNC(arr,a));
}
