#include <stdio.h>
int main() { 
    //defining variables
    char c[10];
    int i=0;
    //taking input from user
    printf("Enter a character: ");
    //assigning value to a variable
    scanf("%s", &c); 
    //printf("%c", c[1]);
    //printing string in reverse
    for(i=0;i<=9;i++){
       // printf("%c",c[i]);
       printf("\nthe value of c[%d] = %d", i , c[i]);
    }
    
    return 0;
}
