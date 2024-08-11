#include<stdio.h>
int main ()
{
  /*
  The Real Thing:

 // NORMAL//    if (condition)
                 statement;
  
// REAL THING// if (expression) 
                 statement;    
  
  */


  // Normal //
   int x = 5;
    if (x==5)
    printf("HELLO 0 \n ");


// REAL THING//
   int A;
    if (A=10)// if inside this ( ) there is characeter like A B C OR ALPHABET LIKE HELLO WORLD, & NUMERIC  DIGIT 1 2 3 4 EXCEPT (0) //
    printf("HELLO\n");
    char ch = 'a';
    if('a')           /// *IMPORTANT//  
    printf("WORLD 1 \n");
    if (-5)
    printf("HELLO 2 \n");
    if (1)
    printf("HELLO 3 \n ");
    if (3+2%5)
    printf("HELLO 4 \n");
    if (0)
    printf("HELLO 5 \n ");

    return 0;
}