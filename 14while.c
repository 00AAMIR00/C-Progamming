#include <stdio.h>

int main(void)
{
    /*Detailed Explanation
Initialization: int i = 1; initializes the loop counter.

1 Condition: while (i <= 10) checks if the current value of i is less than or equal to 10.
2 Loop Body: printf("%d\n", i); prints the current value of i.
3 Increment: i++; increments the value of i by 1 after each iteration.

This loop will print the numbers 1, 2, 3, 4, and 5 ....10 each on a new line.*/
    int i =1;
    while(i<10){
        printf("%d ",i);
        i++;
    }
    return 0;
}
