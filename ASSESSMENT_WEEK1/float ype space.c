#include <stdio.h>
#include<string.h>
#include<float.h>
int main() {  
    //declaring variable
    float floatType;
    //printing size of float
   printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("&E\n",FLT_MIN);//printing size of min range
     printf("&E\n",FLT_MAX);//printing size of max range
     
    return 0;

   
}
