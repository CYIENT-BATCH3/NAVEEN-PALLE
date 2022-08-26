#include<stdio.h>

int main(){
    int a;//variable declaring
  int b1, b2, b3, b4, b5, b6, b7, b8;
  printf("enter decimal : ");//input
  scanf("%d",&a);//assign
  b1=a%2;a=a/2;//converting 
  b2=a%2;a=a/2;//converting
  b3=a%2;a=a/2;//converting
  b4=a%2;a=a/2;//converting
  b5=a%2;a=a/2;//converting
  b6=a%2;a=a/2;//converting
  b7=a%2;a=a/2;//converting
  b8=a%2;a=a/2;//converting
  printf("binary value is : %d%d%d%d%d%d%d%d",b8,b7,b6,b5,b4,b3,b2,b1);//printing binary
return 0;
}