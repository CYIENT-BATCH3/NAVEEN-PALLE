#include <stdio.h>
//#include<string.h>
//#include<float.h>
int main() 
{  
  int a1, a2, a3, a4, a5;
  int int_sum, q;
  
  char c1,c2,c3;
  float f1;
  float f2;
  float f3;
  float f4;
  float f_sum;
  printf("enter 5 intiger\n");
  scanf("%d %d %d %d %d",&a1, &a2, &a3, &a4, &a5);
  printf("value intiger is : %d %d %d %d %d\n",a1,a2 ,a3, a4, a5);
  int_sum = a1+a2+a3+a4+a5;
  printf(" sum of int : %d\n",int_sum);
  /****************************************************************/
  printf("enter 3 charector\n");
  scanf(" %c %c %c",&c1,&c2,&c3);
  printf("value char is : %c %c %c\n", c1,c2,c3);
  //printf("value char is : %c", c2);
  //printf("value char is : %c", c3);
  /***********************************************************/
  printf("\nenter float values : ");
  scanf("%f %f %f %f", &f1,&f2,&f3,&f4);
  printf("\n value float is : %f %f %f %f",f1,f2,f3,f4);
  f_sum = f1+f2+f3+f4;
   q = f1+f2+f3+f4;
  printf("\n sum of float : %f",f_sum);
  printf("\n printing float in int : %d",q);
  float div = int_sum/f_sum;
  printf("\ndiv value is : %f", div);
  
  
  
}

