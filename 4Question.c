#include <stdio.h>

int main()
{
    // Question 2 : Display the AP :4,7,10,13,16 .. UP TO n terms


// tn = 4(n-1)3
// tn = 4+3n-3
//tn  = 3n+1
   int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);
        for(int j = 4; j<=3*n-1; j=j+3)
        {
            printf("%d ",j);
        }
    return 0;
}
