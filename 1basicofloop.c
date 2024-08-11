#include<stdio.h>
int main ()
{

 In C programming,
  loops are used to execute a block of code repeatedly until a certain condition is met. 
  There are three primary types of loops in C:

            1         For Loop

            2        While Loop

            3        Do-While Loop
 
 




 1. For Loop
  The for loop is used when you know beforehand how many times you want to execute a statement or a block of statements.
  The syntax for the for loop is:

  //for (initialization; condition; increment/decrement) {
    // statements

    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
    //In this example, the loop will run 5 times, printing the iteration number each time.



2. While Loop
The while loop is used when you want to repeat a block of code as long as a condition is true.
 The condition is evaluated before the execution of loop’s body.
  The syntax for the while loop is:

                                     while (condition) {
                                      statements}


 int j = 0;
    while (j < 5) {
        printf("Iteration %d\n", j);
        j++;
    }

//In this example, the loop will run as long as i is less than 5.


3. Do-While Loop
The do-while loop is similar to the while loop, but the condition is evaluated after the execution of loop’s body.
 This means that the do-while loop will execute its statements at least once, even if the condition is false.
  The syntax for the do-while loop is:

 //                    do {
 //                       statements}
 //                    while (condition);
    int k = 0;
    do {
        printf("Iteration %d\n", k);
        k++;
    } while (k < 5);
    
  // In this example, the loop will also run 5 times, similar to the while loop.

                                     ///IMPORTANT///

 सारांश
         For Loop (फॉर लूप): जब आपको पहले से पता हो कि कोड को कितनी बार चलाना है।

          While Loop (वाइल लूप): जब कोड चलाने से पहले शर्त को जांचना हो।
          
           Do-While Loop (डू-वाइल लूप): जब कोड को कम से कम एक बार चलाना ही हो, चाहे शर्त सही हो या गलत।



c











    return 0;
}



