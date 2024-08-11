#include <stdio.h>
int main()
{
// simple interest//
    float p;
    printf("Type Principle--");
    scanf("%f",&p);
    float r;
    printf("Type Rate--");
    scanf("%f",&r);
    float t;
    printf("Type Time--");
    scanf("%f",&t);
    float si = (p*r*t)/100;
    printf("Simple haram interest is %f", si);

    return 0;
}