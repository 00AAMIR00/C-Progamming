#include <stdio.h>

int main(void)
{
 //Question 1 : WAP to count a digits of a given number.

 //# hint : use divide operater
   //     : divide with the help of 10 

  int a;
  printf("Enter a digit :");
  scanf("%d",&a);
  int count = 0;
  while(a!=0)
  {
    a = a/10;
    count++;
  }
  printf("The no of digits are :%d",count);


//Question 2 : WAP to print sum of digits of given number.

 int n;
 printf ("\nEnter a digit:");
 scanf("%d",&n);
 int sum = 0;
 int lastdigit = 0;
 while(n!=0){
    lastdigit = n%10;
    sum = sum + lastdigit;
    n= n/10;
 }
  printf("The sum of digits are :%d",sum);


      return 0;
}
