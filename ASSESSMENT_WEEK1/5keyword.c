#include<stdio.h>
#include <stdbool.h>

int main()
{
 //declaring variables
 int a;
 float b;
 char c;
 long d ;
 bool x=0;
 printf("ENTER THE INTEGER VALUE OF a\n");//taking input from user
 scanf("%d",&a);//assigning value to variable
 printf("ENTER THE FLOAT VALUE OF b\n");//taking input from user
 scanf("%f",&b);//assigning value to variable
 printf("ENTER THE CHARACTER VALUE OF c\n");//taking input from user
 scanf(" %c",&c);//assigning value to variable
  printf("ENTER THE long VALUE OF a\n");//taking input from user
 scanf("%ld",&d);//assigning value to variable
  printf("ENTER THE bool VALUE OF a\n");//taking input from user
 scanf("%d",&x);//assigning value to variable
 printf("The integer is =:%d\n",a);//printing  output
 printf("The float is =:%f\n",b);//printing  output
 printf("The char is =:%c\n",c);//printing  output
 printf("The long is =:%ld\n",d);//printing  output
 printf("The bool is =:%d\n",x);//printing  output
}
