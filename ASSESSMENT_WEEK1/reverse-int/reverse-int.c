
#include <stdio.h>
#include<string.h>
int main() {//main function
  int a,D1,D2,D3,D4,D5,D6,rev;//variable declaration
  printf("the 6 digits =");
  scanf("%d",&a);//taking inputs
  printf("\n the value is : \d : %d",a);//printing which we have taken by user
    D6=a%10;// percentailing of the last digit.
    a=a/10;// dividing of the last digit.
    D5=a%10;// percentailing of the 5 digit.
    a=a/10;// dividing of the 5 digit.
    D4=a%10;// percentailing of the 4 digit.
    a=a/10;// dividing of the 4 digit.
    D3=a%10;// percentailing of the 3 digit.
    a=a/10;// dividing of the 3 digit.
    D2=a%10;// percentailing of the 2 digit.
    a=a/10;// dividing of the 2 digit.
    D1=a%10;// percentailing of the 1 digit.
    a=a/10;// dividing of the 1 digit.
    rev=D6*100000+D5*10000+D4*1000+D3*100+D2*10+D1;//adding all and assign to one veriable
    printf("\n the reverse value is = %d",rev);//printing value 
return 0;
}
