#include <stdio.h>
//#include<string.h>
//#include<float.h>
int main() 
{  
  //assigning variables
  int a1, a2, a3, a4, a5;
  int int_sum, q;
  
  char c1,c2,c3;
  float f1;
  float f2;
  float f3;
  float f4;
  float f_sum;
  printf("enter 5 intiger\n");//taking input from user
  scanf("%d %d %d %d %d",&a1, &a2, &a3, &a4, &a5);//assigning values to variable
  printf("value intiger is : %d %d %d %d %d\n",a1,a2 ,a3, a4, a5);//printing values
  int_sum = a1+a2+a3+a4+a5;// adding value and assigning tvariable
  printf(" sum of int : %d\n",int_sum);//printing sum value
  /****************************************************************/
  printf("enter 3 charector\n");//taking input from user
  scanf(" %c %c %c",&c1,&c2,&c3);//assigning values to variable
  printf("value char is : %c %c %c\n", c1,c2,c3);//printing values
  //printf("value char is : %c", c2);
  //printf("value char is : %c", c3);
  /***********************************************************/
  printf("\nenter float values : ");//taking input from user
  scanf("%f %f %f %f", &f1,&f2,&f3,&f4);//assigning values to variable
  printf("\n value float is : %f %f %f %f",f1,f2,f3,f4);//printing values
  f_sum = f1+f2+f3+f4;// adding value and assigning tvariable
   q = f1+f2+f3+f4;// adding value and assigning tvariable
  printf("\n sum of float : %f",f_sum);//printing values
  printf("\n printing float in int : %d",q);//printing values
  float div = int_sum/f_sum;// adding value and assigning tvariable
  printf("\ndiv value is : %f", div);//printing values
  
  
  
}

