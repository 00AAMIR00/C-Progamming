#include<stdio.h>
int main()
{
    // This                   is               single          line               comment
    /*This 

    is  

    multiline

    comment*/
    
    printf("Hello \n C language");
    // (/n  its provide u next(new) line )
    int x = 5;
    int y = 2;
    //%d  for integer (digits like -> 0,1,2,3,4,5,6,7,8,9)
    printf("\n%d",x+y);
    printf("\n%d",x-y);
    printf("\n%d",x*y);
    printf("\n%d",x/y);

    return 0;
}