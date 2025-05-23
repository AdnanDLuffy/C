#include <stdio.h>

int main () {
    int y ;
    y =8;
    y =10;
//now if we print the ouptput of y it will show 10
/*
cause this works like let , to make it unchangable we
use const
*/
const int a = 3;
// a =4; will show error
printf("%d",a);

    return 0;
}