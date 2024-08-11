#include <stdio.h>




      // Question 1//

// (WRITE A PROGRAM) WAP TO CHECK IF A NUMBER IS PRIME NUMBER OR NOT .


int main(void)
{
int n;
printf("Enter the value of n \n");
scanf("%d",&n);
int a = 0; // purpose of this line so that answer will not repeat and fullfill the prime number condition
for(int i=2;i<=n-1;i++) {
if(n%i==0){ // i is a factor of n
a = 1; // fullfill the prime number condition
break;
}
}
if(n==1)  printf("the given number nor prime or nor composite number\n");
else if(a==0) printf("the given number is prime\n"); 
else printf("the given number is composite\n");

    return 0;
}
