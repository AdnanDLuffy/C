#include <stdio.h>
#include <sys/types.h>

int main () {
    int x;
    float y;
    char z ;
    double k ;

    // long unsigned int
    printf("%lu \n",sizeof(x));
     printf("%lu \n",sizeof(y));
      printf("%lu \n",sizeof(z));
     printf("%lu \n",sizeof(k));

     // this let's us see the bit or memory size 
    return 0;
}