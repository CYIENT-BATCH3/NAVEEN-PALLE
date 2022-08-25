#include<stdio.h>
#include <stdbool.h>

int main()
{
 int a;
 float b;
 char c;
 long d ;
 bool x=0;
 printf("ENTER THE INTEGER VALUE OF a\n");
 scanf("%d",&a);
 printf("ENTER THE FLOAT VALUE OF b\n");
 scanf("%f",&b);
 printf("ENTER THE CHARACTER VALUE OF c\n");
 scanf(" %c",&c);
  printf("ENTER THE long VALUE OF a\n");
 scanf("%ld",&d);
  printf("ENTER THE bool VALUE OF a\n");
 scanf("%d",&x);
 printf("The integer is =:%d\n",a);
 printf("The float is =:%f\n",b);
 printf("The char is =:%c\n",c);
 printf("The long is =:%ld\n",d);
 printf("The bool is =:%d\n",x);
}