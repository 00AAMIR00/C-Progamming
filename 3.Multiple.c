#include <stdio.h>
int main()
{
                                  //Question 1
 // Take 3 positive integers input and tell if they can be the sides of triangle

 int n1;
 printf("Enter a n1 positive integer\n");
 scanf("%d",&n1);
 int n2;
 printf("Enter a n2 positive integer\n");
 scanf("%d",&n2);
 int n3;
 printf("Enter a n3 positive integer\n");
 scanf("%d",&n3);
 if((n1+n2)>n3 && (n2+n3)>n1 && (n3+n1)>n2)
 {
    printf("sides of triangle are Valid\n");
 }
else{
     printf("sides of triangle are Not Valid \n");
 }
 
       // Question 2
//HW: If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.

int RAM;
 printf("Enter a RAM age integer\n");
 scanf("%d",&RAM);
 int Shyam;
 printf("Enter a Shyam age integer\n");
 scanf("%d",&Shyam);
 int Ajay;
 printf("Enter a Ajay age integer\n");
 scanf("%d",&Ajay);
 if(RAM<Shyam && RAM<Ajay)
{
    printf("youngest age of Ram : %d",RAM);
}
if(Shyam<RAM && Shyam<n3)
{
    printf(" youngest age of Shyam  : %d",Shyam);
}
if(Ajay<RAM && Ajay<Shyam)
{
    printf("youngest age of Ajay : %d",Ajay);
}
  // Question 3//
// Take positive integer input and tell if it is divisible by 5 and 3. 
// with out &&,||
int ni;
 printf("Enter a positive integer\n");
 scanf("%d",&ni);          
 if (ni%3==0){
 if (ni%5==0)
                   {printf("It is divisible by 3 and 5 ");}
              else{printf("It is  divisible by 3 but not divisible by 5 \n");}
              }

  else{printf("It is not divisible by 3 and 5 \n");}



                                           // Question 4//
// Take positive integer input and tell if it is divisible by 5 or 3
// but not divisible by 15.

int i;
 printf("Enter a positive integer\n");
 scanf("%d",&i);
 if(i%3==0 || i%5==0 ){         ///if ((i%3==0 ||i%5==0)&& i%15!=0)//
 if (i%15!=0)             
 {
    printf("It is divisible by 3 or 5 \n");
 }
 else{
     
    printf("It is not divisible by 3 and 5 \n");}
 }
else{
     
    printf("It is not divisible by 3 and 5 \n");
 }



    return 0;

}