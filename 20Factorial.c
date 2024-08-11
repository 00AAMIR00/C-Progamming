  #include <stdio.h>
  
  int main(void)
  {

/*

The factorial of a non-negative integer 𝑛 is the product of all positive integers less than or equal to 
𝑛 It is denoted by n! and defined as follows:

n!=n×(n−1)×(n−2)×…×1

For example:

5!=5×4×3×2×1=120

**     0!=1 (by definition)                 **
*/

 // Question  PRINT THE factorial OF GIVEN NUMBER 'n'.

 int n;
 printf("Enter that digit ");
 scanf("%d",&n);
 int factorialOFn =1;
 for (int i =1; i<=n;i++)
 {
    factorialOFn = factorialOFn *i;
 }
printf("Factorial of given number %d",factorialOFn);



// // Question  PRINT THE factorial OF first 'n'numbers .
int N;
 printf("Enter that digit ");
 scanf("%d",&N);
 int factorialOFN =1;
 for (int i =1; i<=N;i++)
 {
    factorialOFN = factorialOFN *i;
    printf("\n THE factorial  %d is :  %d",i,factorialOFN);
 }
printf("\n Factorial of given number %d",factorialOFN);
    return 0;
  }
  