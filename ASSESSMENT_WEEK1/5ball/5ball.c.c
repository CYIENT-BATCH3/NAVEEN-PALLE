#include<stdio.h>

int main(){
    int ball1, ball2, ball3, ball4, ball5;//defined veriable
    scanf("%d%d%d%d%d",&ball1,&ball2,&ball3,&ball4,&ball5);//taking 

    (ball1%2==0)?printf("%d is even \n",ball1):printf("%d is odd\n",ball1);//checking 
    (ball2%2==0)?printf("%d is even\n",ball2):printf("%d is odd\n",ball2);//checking 
    (ball3%2==0)?printf("%d is even\n",ball3):printf("%d is odd\n",ball3);//checking 
    (ball4%2==0)?printf("%d is even\n",ball4):printf("%d is odd\n",ball4);//checking 
    (ball5%2==0)?printf("%d is even\n",ball5):printf("%d is odd\n",ball5);//checking 
      return 0;   
}