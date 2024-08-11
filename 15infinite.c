#include <stdio.h>

int main(void)
{


int i = 1;






    while (i <= 5) {
        printf("%d\n", i);
        // The increment statement is missing, causing an infinite loop
    }
     In this example, the condition i <= 5 will always be true
      because i is never incremented.
     As a result, the loop will run forever, continuously printing 
    return 0;
}
