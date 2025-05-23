#include <stdio.h>
int main () {
    float x = 4.9;
    printf("%lf \n",x);
    // to reach the max precision 
    // we use 
    printf("%.2lf",x);
    return 0;
}