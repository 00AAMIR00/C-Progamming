#include <stdio.h>
int main ()
{
    // Operater--> +,-,*,/,% 
/* Modulo----> In C, the modulo operator, denoted by %,
 returns the remainder of the division operation between two numbers.
 For example:*/ 

    int a = 10;
    int b = 3;
    int result = a % b;  // result will be 1 because 10 divided by 3 leaves a remainder of 1
    printf("The result is %d\n", result);  // Output: The result is 1
    return 0;
    // IMPORTANT In Modulo if a is smaller than b, example a = 6 & b = 8 then answer will be a
    int c = 6;
    int d = 8;
    int result = a % b;  // result will be 6 because 6 divided by 8 leaves a remainder of 1
    printf("The result is %d\n", result);  // Output: The result is 6
     
     // IMPORTANT
     // 2 % x = 2 [ x > 2]
     // a % b = a [a < b]

}
