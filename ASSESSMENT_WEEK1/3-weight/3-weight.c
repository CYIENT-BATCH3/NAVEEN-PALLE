#include<stdio.h>

int main(){
    int a,b,c;//VERIABLE DECLARATION
  printf("enter first person weight = ");//input
  scanf("%d",&a);//assigning
   printf("enter 2 person weight = ");//input
  scanf("%d",&b);//assigning
   printf("enter 3 person weight = ");//input
  scanf("%d",&c);//assigning
  //int hev;
  (a>b && a>c)?printf("hevy is : A and value is %d",a):(b>c)?printf("hevy is :B and value is : %d",b):printf("hevy is : C and the value is %d",c);
// printf("hev is %d ",hev);
  return 0;
  
}