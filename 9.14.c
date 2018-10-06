//the question has been modified as first merging and then sorting as doing vice versa would require sorting two times (one after merging also)
#include<stdio.h>
int arr1[50],arr2[50],arr3[50];

void sort(int AR[],int n){
  int small,pos,tmp;
  for(int i=0;i<n-1;i++){
    small=AR[i];
    pos=i;
    for(int j=i+1;j<n;j++){
      if(AR[j]<small){
        small=AR[j]; pos=j;
      }
      tmp=AR[i];
      AR[i]=AR[pos];
      AR[pos]=tmp;
    }
  }
}
void merge(int AR1[],int n1,int AR2[],int n2){
int i=0;
  for(i=0;i<n1;i++){
    arr3[i]=AR1[i];
  }
  for(int j=0;j<n2;j++){
    arr3[i]=AR2[j];
    i++;
  }

}
void print(int n1,int n2){
  printf("sorted and merged array\n");
  for (int i=0 ; i < n1+n2; i++) {
    printf("%d\n",arr3[i]);
  }
}

void  read(){
  int n1,n2,i;
  printf("Enter length of array 1 and array 2 respectively\n");
  scanf("%d%d",&n1,&n2);
  printf("Enter elements of array 1\n");
  for (i=0 ; i < n1; i++) {
    scanf("%d",&arr1[i]);
  }
  printf("Enter elements of array 2\n");
  for (i=0 ; i < n2; i++) {
    scanf("%d",&arr2[i]);
  }
  merge(arr1,n1,arr2,n2);
  sort(arr3,n1+n2);
  print(n1,n2);

}


void main(){
  read();
}
