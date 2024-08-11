#include <stdio.h>
int main ()
{
   /* 
   The "ternary operator," also known as the conditional operator,
    is a concise way to express conditional statements in many programming languages.
    It's called "ternary" because it takes three operands
   : a condition followed by two expressions. Its syntax generally looks like this:
   
   // condition ? expression1 : expression2 ;
   */
int n;
printf("Enter a number: ");
scanf("%d",&n);
// ternary operator
// exp1 ? exp2: exp3 ;
n%2==0? printf("Even number"): printf("Odd number");
// if(n%2==0)
//
//printf("Even number");
// else
//
//printf("Odd number");
    return 0 ;
}