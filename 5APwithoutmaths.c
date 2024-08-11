#include <stdio.h>

int main(void)
{

 // Question 2 : Display the AP :4,7,10,13,16 .. UP TO n terms
// with out using maths
   int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);
        int a = 4;
        for(int i =1; i<=n;i++) {   // this line is for creating loop for n times & increment of i 
            printf("%d ",a);
            a = a+3;   // this line is for increment of a 
        }

    return 0;
}
