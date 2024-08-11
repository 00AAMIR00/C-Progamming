#include <stdio.h>
#include <stdbool.h>
/*keywords
In C, the bool type represents Boolean values, which can have one of two states: true or false. C does not have built-in support for Boolean types.

To use bool type in C, you need to include the <stdbool.h> header file, which provides the necessary definitions. This header file defines bool as a macro that expands to _Bool, and it also defines constants true and false.

Here's an example:

*/

int main() {
        
        int x = 3; // = represent (assingment)
        printf ("%d",x==10); // == represent ITS CHECKS X IS 10 OR NOT  
        // result output is 0 which means false
        // if printf ("%d",x=10); result output is 1 which means True ///

                            ///// QUESTION

    bool isRaining = true; // bool is indeed a variable type in C
    bool isSunny = false;

    if (isRaining) 
        printf("\n It's raining.");
     else if (isSunny) 
        printf("\n It's sunny.");
     else 
        printf("It's neither raining nor sunny.\n");


      int n;
      printf("Are you happy");
      printf("%d", n==0);
    return 0;
}


