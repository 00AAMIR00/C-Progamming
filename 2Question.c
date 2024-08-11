#include<stdio.h>
int main ()
{
  //Question 1 : Print number 1 to 10

 for (int i = 1; i<=10; i=i+1)
 {
   printf("%d",i) ;    // answer will print in line with no space like:123456 
   printf("%d ",i) ;  //  answer will print in line  with space like:1 2 3 4 5 6 
   printf("%d\n",i) ; //  answer will be print in each new line line like: 1
//                                                                         2
//                                                                         3

 }

// Question 2 Print all even number from 1 t0 100

for(int e =1; e<=100; e++ )
   {if (e%2==0)
   printf("%d ",e);

   }

 
  // Question 3 Print all odd number from 1 t0 100

for(int o=1; o<=100; o=o+2 )
   {
    printf("%d ",o);
   }
 


   // QUESTION 4: Print the table fo 19

   for(int t=19;t<=190;t=t+19){
    printf("%d\n",t);
   }


                              // IMPORTANT //
// Question 5. Print the table of 'n'. hence n is a given integer which user will input.
    
    int n, m;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Print the multiplication table for the entered integer
    printf("Multiplication table for %d:\n", n);
    for(m = 1; m <= 10; ++m) {
        printf("%d * %d = %d\n", n, m, n * m);
    }





    return 0;
}