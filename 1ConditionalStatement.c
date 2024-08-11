#include <stdio.h>
int main ()
{
    //CONDITIONAL STATEMENT 
    //IF IS YADI HO //
    //ELSE IS ANYATHA//

    //QUESTION 1//
    // TAKE POSITIVE INTEGER INPUT AND TELL IF IT EVEN OR ODD
 int a ;
 printf("ENTER THE POSITIVE INTEGER \n");
 scanf("%d",&a);
 if(a%2==0 )
 {
    printf("Integer is Even \n");

 }
 else 
 {
    printf("Integer is Odd \n");

 }

 // QUESTION 2//
 //TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR NOT ? 
  int b ;
 printf("ENTER THE POSITIVE INTEGER \n");
 scanf("%d",&b);
 if(b%5==0 )
 {
    printf("Divisible by 5 \n");

 }
 else 
 {
    printf("NOT Divisible by 5 \n");
 }
                                             // QUESTION 3//

// ANY YEAR IS INPUT THROW THE KEYBOARD .
// WRITE A PROGRAME TO DETERMINE WHERE THE YEAR IS LEAP YEAR OR NOT .
//( CONSIDERDRING LEAP YEAR OCCUR AFTER EVERY 4 YEAR)

 int INTERyear ;
 printf("ENTER THE YEAR \n");
 scanf("%d",&INTERyear);
 if(INTERyear%4==0 )
 {
    printf("THIS YEAR IS LEAP YEAR \n");

 }
 else 
 {
    printf("THIS YEAR IS NOT A LEAP YEAR \n");
 }

                                                // QUESTION 4//

// TAKE INTEGER INPUT AND PRINT THE ABSOLUTE VALUE OF THAT INTEGER

int INPUT;
printf("\n ENTER INTEGER INPUT ");
scanf("%d",&INPUT);
if(INPUT<0){
   
   INPUT = INPUT *(-1) ;
}
printf("ABSOLUTE VALUE OF INTEGER  %d",INPUT);


                                          // QUESTION 5 //

//Ques: If cost price and selling price of an item is input through the keyboard, 
//write a program to determine whether the seller has made profit or incurred loss.
// Also determine how much profit he made or loss he incurred.

int costprice;
printf("ENTER THE VALUE OF COST PRICE \n");
scanf("%d",&costprice);
int sellingprice;
printf("ENTER THE VALUE OF SELLING PRICE \n");
scanf("%d",&sellingprice);

if(sellingprice>costprice)
{
 printf("PROFIT \n");
}
if (sellingprice<costprice)
{
  printf("LOSS \n");
}
if (sellingprice==costprice )
printf("NO PROFIT NO LOSS\n");

                                                      // QUESTION 6
// Given the length and breath of a rectangle,
// write a program to find whether the area of the rectangle is greater than its perimeter.

int length;
printf("Print length of RECTANGLE \n");
scanf("%d",&length);
int breath;
printf("Print breath of RECTANGLE \n");
scanf("%d",&breath);
if(length*breath<2*(length+breath))
printf("AREA OF RECTANGLE IS GREATER THAN ITS PERIMETER \n");
if(length*breath>2*(length+breath))
printf("AREA OF RECTANGLE IS NOT GREATER THAN AREA OF PERIMETER \n");
if(length*breath==2*(length+breath))
printf("AREA AND PERIMETER BOTH ARE EQUAL\n");

    return 0;

}