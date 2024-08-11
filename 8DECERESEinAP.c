#include <stdio.h>

int main(void)
{

 // Question 2 : Display the AP :100,97,94 .. UP TO all positive term
// with out using maths
int n;
        printf("Enter the value of n \n");
        scanf("%d",&n);
        int a = 100;
        for(int i =1; i<=n;i++) {  // we can also use a>0; multiple condition on loop
            printf("%d ",a);
            a = a-3;   // this line is for increment of a 
        }

 
    return 0;
}
