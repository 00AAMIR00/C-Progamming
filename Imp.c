#include<stdio.h>
int main()
{  
     // In Maths x = 5 means as it is!
    // In programming x = 5; means |5|
   //                               x̄
    int x = 5;
    printf("%d",x);
    x = x + 6;
//  x = |5|+ 6; 
    printf("\n%d",x);
    x = x + 2;
//  x = (|5|+ |6|) or |11|   + 2;
    printf("\n%d",x);

    return 0;
}