 #include <stdio.h>
 
 int main(void)
 {
    /*
    The Fibonacci sequence is a series of numbers where each number
     is the sum of the two preceding ones, usually starting with 0 and 1. 
     The sequence looks like this:
     0,1,1,2,3,5,8,13,21,34,…
    */

 // who to find fibonacci series n-th term 

 /// n term = (n-1) term + (n-2) term

 // fibonacci sequence series 1,1,2,3,5,8,13,21.... nth term

 // find the nth term of fibonacci serious?

     int n;
     printf ("Enter n-th term of fibonacci series ");
     scanf("%d",&n);
     int firstdg = 1;
     int seconddg = 1;
     int nextdg = 1;
     for (int i=1; i<=n-2;i++) // n-2 is because loop first and second digit are know
     // that why we do n-2 so that so that that loop will don't go furture
     {
       nextdg  =  firstdg  +  seconddg;
       firstdg =  seconddg ;
       seconddg =  nextdg;
     }
     printf("nth term of fibonacci series %d",nextdg);


     // Print first fibonacci number.

     int m;
     printf ("\n Enter n-th term of fibonacci series ");
     scanf("%d",&m);
     int first = 1;
     int second = 1;
     int next = 1;
     printf("\n The fibonacci  %d is : 1",first);
     printf("\n The fibonacci  %d is : 1",second);
     for (int i=1; i<=n-2;i++) // n-2 is because loop first and second digit are know
     // that why we do n-2 so that so that that loop will don't go furture
     {
     
       next  =  first  +  second;
       printf("\n The fibonacci  %d+2 is : %d",i,next);
       first =  second ;
       second =  next;
     }
     printf("\n nth term of fibonacci series %d",next);


   // Ques: Two numbers are entered through the keyboard.
   // Write a program to find the value of one number raised
   // to the power of another.

   Flipper zeroFlipper zero
    int a;
     printf ("\n Enter the number ");
     scanf("%d",&a);
     int b;
     printf ("\n Enter the number ");
     scanf("%d",&b);
     int power =1 ;
     for (int i = 1; i<=b; i++)
     {
         power = power *a;
     }
     printf ("\n Value of number %d ",power);

    return 0;
 }
 