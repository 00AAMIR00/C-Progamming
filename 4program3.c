#include <stdio.h>
int main()
{  

    // AREA OF CIRCLE
   int r ;
   printf("Type radius :");
   scanf("%d",&r);
   // scanf function provide us user input
   float pi = 3.1415;
   float a = pi*r*r;
   printf("Area of circle %f", a);
   return 0;
}