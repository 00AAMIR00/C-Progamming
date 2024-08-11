#include <stdio.h>
int main()
{
// NEW QUERRY 
     /*   TAKE TWO INTEGERS INPUT A AND B :A >B WHEN B/A  THEN WHAT IS REMINDER? */
    int a;
    printf("ENTER VALUE OF DIVISOR\n");
    scanf("%d",&a);
    int b;
    printf("ENTER VALUE OF DIVIDENT \n");
    scanf("%d",&b);
    int q = b/a;
    printf("VALUE OF QUOTIENT\n %d",q);
    int REMINDER = b -(a*q);
    printf("\n REMINDER WHEN B/A = %d",REMINDER);
 // diffrent way 
    return 0;
}