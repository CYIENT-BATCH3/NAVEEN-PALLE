#include<stdio.h>
#include<float.h>
struct de{
    long int a;
    char b[40];
    float c;
    
}addition;
int main(){
    printf("enter name : \n");
    scanf("%s",addition.b);
    printf("enter phone number : ");
    scanf("%ld",&addition.a);
    printf("\n enter salary : ");
    scanf("%f",&addition.c);
    printf("\n ass details is :");
    printf("\n%s",addition.b);
    printf("\n%ld \n",addition.a);
    printf(" %f",addition.c);
    return 0;
}