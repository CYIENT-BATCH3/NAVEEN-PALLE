
#include<stdio.h>  
#include <string.h>  
///////formatted data//////////
int main(){
    ///////variable assign
int a;
char c;
float f;
double d;
//taking input from user////
printf("enter  char, int ,float, double :\n ");
scanf("%c",&c);//asign
scanf(" %d",&a);//asign
scanf(" %f",&f);scanf(" %lf",&d);//asign
//printing values
printf("\n values are char c = %c",c);
printf("\nvalues are float f = %f",f);
printf("\nvalues are double = %lf",d);
printf("\nvalues are int a = %d\n",a);
return 0;
}
