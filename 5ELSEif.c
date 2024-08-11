#include<stdio.h>
int main()
{
   // nested IF and Else with out && ||

   
                                  //Question 1
 // Take 3 positive integers input and print the greatest of them

 int a;
 printf("Enter the value of a positive integer\n");
 scanf("%d",&a);
 int b;
 printf("Enter the value of b positive integer\n");
 scanf("%d",&b);
 int c;
 printf("Enter  the value of c positive integer\n");
 scanf("%d",&c);

if(a>b)
{ if (a>c)
   printf("a is greatest : %d",a);
else
    printf("c is is greatest : %d",c);
}

else  //b>a it's mean a is not greatest
 {if (b>c) 
 printf("b is greatest : %d",b);
else // c > b 
 printf("c is is greatest : %d",c);
 }
   


   // QUESTION 2 

// TAKE INPUT PERCENTAGE OF A STUDENT AND PRINT THE GRADE ACCORDING TO THE MARKS:
/*
1)91-100 Excellent
2) 81-90 Very Good
3) 71-80 Good
4) 61-70 Can do better
5) 51-60 Average
6) 41-50 Below Average
7) <40 Fail */

int PERCENTAGE ;
printf("\n print the percentage :");
scanf("%d",&PERCENTAGE);

if (PERCENTAGE>90)
{
   printf("GRADE IS EXCELLENT \n");
}
else if (PERCENTAGE>80)
{
   printf("GRADE IS VERY GOOD \n");
}
else if (PERCENTAGE>70)
{
   printf("GRADE IS CAN DO BETTER\n");
}
else if (PERCENTAGE>60)
{
   printf("GRADE IS CAN DO BETTER\n");
}
else if (PERCENTAGE>50)
{
   printf("GRADE IS  AVERAGE \n");
}
else if (PERCENTAGE>40)
{
   printf("GRADE IS  BELOW AVERAGE\n");
}
else
{
   printf("GRADE IS  FAIL \n");
}



                                                     // QUESTION 3 
 //Ques: Given three points (x1, y1), (x2, y2) and (x3, y3),
 //write a program to check if all the three points fall on one straight line.
 double x1;
 printf("Enter the value of x1:\n");
 scanf("%d",&x1);
 double y1;
 printf("Enter the value of y1\n");
 scanf("%d",&y1);
 double x2;
 printf("Enter  the value of x2 \n");
 scanf("%d",&x2);
 double y2;
 printf("Enter the value of y2:\n");
 scanf("%d",&y2);
 double x3;
 printf("Enter the value of x3 \n");
 scanf("%d",&x3);
 double y3;
 printf("Enter  the value of y3\n");
 scanf("%d",&y3);

// find the slope m1 = (x2-y2)/(x1-y1)
double m1 = (y2-y1)/(x2-x1);
double m2 =(y3-y2)/(x3-x2);
if (m1 == m2)
{
   printf("three points fall on one straight line");

}
else {
   printf("not in straight line");
}
                                      // Question 4
///Ques: Given a point (x, y), write a program 
//to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 

int x;
 printf("Enter the value of x\n");
 scanf("%d",&x);
 int y;
 printf("Enter the value of y\n");
 scanf("%d",&y);
 if ( x==0 && y ==0 )
    {
      printf("IT LIES ON ORIGIN POINT");
    }
else if ( x == 0)
    {
      printf("it lies on Y axis");
    }
else if ( y == 0)
{
     {
      printf("it lies on Y axis");
    }
    }

else
{
   {
      printf("it not lies on X OR Y axis");
    }
}
    return 0; 
}