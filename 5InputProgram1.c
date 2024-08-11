#include<stdio.h>
int main()
{
//              TAKING INPUT SUM OF 2 GIVEN NUMBERS
 int x;
 printf("Enter first number \n");
 scanf("%d",&x);
 int y;
 printf("Enter second number \n");
 scanf("%d",&y);
 int sum = x+y;
 printf ("sum of the two given numbers is %d \n",sum);


// NEW QUERRY
  // Taking multiple input and predict the output
    int p,q;
    printf("Enter value of p and q");
    scanf("%d %d",&p,&q);
    printf("p = %d q =%d \n",p,q); // (" %d %d \n",p,q);
        return 0;
}