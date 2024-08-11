#include <stdio.h>

int main(void)
{
  //Continue
//The continue statement is used to skip the rest of the code inside the current
// iteration of the loop and jump to the next iteration.
  //When continue is encountered, the loop does not terminate but immediately proceeds to the next iteration.

    for (int i = 0; i < 10; i++) {
        if (i == 5) { // if condition works the continue statement
            continue; // skip the current iteration and proceeds to the next iteration of the loop.
        }
        printf("%d\n", i);
    }

    return 0;
}
