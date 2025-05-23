//type conversion

#include <stdio.h>
 int main() {
    int a = 10;
    int b = 3;
    int sum = a/b;
    printf("%d",sum);
    //it will print 3 not the whole number 
    // so instead of int we will use float

    float SUM = (float) a/b;
    printf("%f",SUM); 
    return 0;
 }
