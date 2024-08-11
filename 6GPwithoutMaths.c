#include <stdio.h>

int main(void)
{
 // Display the Gp of- 1,2,4,8,16,32,.... up to n times
  // formula of gp is - (gp)n =a*r^n-1
  // were a is first term // r is diffrence // n is terms 
 

int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);
        int a = 1;
        for(int i =1; i<=n;i++) {   // this line is for creating loop for n times & increment of i 
            printf("%d ",a);
            a = a*2;   // this line is for increment of a 
        }


    return 0;
}
