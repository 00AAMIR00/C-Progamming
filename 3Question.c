#include <stdio.h>

int main(void)
{

// Question 1 : Display the AP is 1,3,5,7,9 .. UP TO n

  /*AP IS SAMANTAR SRENI (ARITHMETIC PROGRESSION) WHERE  is a sequence of numbers in order,
 in which the difference between any two consecutive numbers is a constant value.

FORMULA FORMULA FOR N TERM: 
  
            T^n = a (n-1)d

            T^n = position of n 

            a = first number of ap serios 

            d = difference between a2-a1

        tn = 1 (n-1)*2
        tn = 1(2n-2)
        tn = 1+2n-2
        tn = 2n-1 */

        int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);
        for(int i =1; i<=2*n-1; i=i+2)
        {
            printf("%d ",i);
        }




// Question 2 : Display the AP :4,7,10,13,16 .. UP TO n terms


// tn = 4(n-1)3
// tn = 4+3n-3
// tn  = 3n+1
   int nn;
        printf("Enter the value of nn \n");
        scanf("%d",&nn);
        for(int j =4; j<=3*n+1; j=j+3)
        {
            printf("%d ",j);
        }








    return 0;
}

