#include<stdio.h>
#define pi 3.142857
int main(){
    int radius;//define variables
    int area;
    printf("enter radius of garden is = ");//taking input
    scanf("%d",&radius);//assigned to variable
    area = pi*(radius*radius);//calculating area of the circular garden

    printf("area is %d",area);//printing output
    return 0;
}