#include <stdio.h>

int main(void)
{

// Question 3: Wap to print sum of all the even digit of a given number
   int n, r, s = 0;

   printf("Enter a number:");
   scanf("%d", &n);

   while (n > 0) {
       r = n % 10;
       if (r % 2 == 0) {
           s = s + r;
       }
       n = n / 10;
   }
   printf("Sum of even digits is:%d", s);

                            // Reverse //
                              
 // Question 4: WAP to print the given number reverse
  
 /*  int a;
   printf("Enter any number");
   scanf("%d",&a);
   int rev = 0;
   while(a!=0){
    rev = a % 10;
    printf("%d",rev);
    a = a/10;
   }
   */

    int a;
   printf("Enter any number");
   scanf("%d",&a);
   int rev = 0;
   while(a!=0){
    rev = rev*10;
    rev = rev +(a % 10);
    a    = a/10;
   }
   printf("Print the reverse number %d",rev);

// Question 4: WAP to print the sum given number and its  reverse
  
  int n1 ; // number
  printf("ENter any number");
  scanf("%d",&n1);
  int orgn1 = n1; // number ko save kar liya because after loop end number becomes diffrent
  int n1rev; // reverse number
  while(n1>0){ // finalization
    n1rev = n1rev * 10; //multiply 10 makes reverse number 0*10
    n1rev = n1rev +(n1%10);// 0 + last number
    n1 = n1/10; // this line end this loop because it / 10 
  }
 int sumofboth = orgn1 + n1rev;
 printf ("Sum of given number %d",sumofboth);




  













    return 0;
}
