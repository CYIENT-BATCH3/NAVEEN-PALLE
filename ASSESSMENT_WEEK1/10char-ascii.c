#include <stdio.h>
int main() {  
    char c[10];
    int i=0;
    printf("Enter a character: ");
    scanf("%s", &c); 
    //printf("%c", c[1]);
    for(i=0;i<=9;i++){
       // printf("%c",c[i]);
       printf("\nthe value of c[%d] = %d", i , c[i]);
    }
    
    return 0;
}