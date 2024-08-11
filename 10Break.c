#include <stdio.h>

int main(void)
{ 
    In C programming, the break statement is used to exit a loop or a switch statement prematurely.
    It can be very useful when you need to stop the execution of a loop based on a certain condition or
    when a particular case in a switch statement has been executed. 
    
    example

    1. Using break in a for loop
    
    /*
    #include <stdio.h>

      int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}
        n this example, the loop will print the numbers 0 through 4.
     When i becomes 5, the break statement is executed, and the loop is terminated.
    
    */
    
    2. Using break in a while loop
    
    /*
    #include <stdio.h>

    int main() {
    int i = 0;
    while (i < 10) {
        if (i == 5) {
            break;  // Exit the loop when i is 5
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}
In this example, the loop will print the numbers 0 through 4.
 When i becomes 5, the break statement is executed, and the loop is terminated.
    
    */
    
    
    
    // (WRITE A PROGRAM) WAP TO CHECK IF A NUMBER IS PRIME NUMBER OR NOT .


    return 0;
    }
