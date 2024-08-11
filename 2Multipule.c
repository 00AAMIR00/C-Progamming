#include<stdio.h>
int main ()
{
  // Multiple CONDITION USING && and ||
   // These are LOGICAL OPERATER
  // &- (AND)
  // |- (OR)



                                               //Ques:1

// Take positive integer input and tell if it is a three digit number or not.
 

 int n;
 printf("Enter a positive integer\n");
 scanf("%d",&n);
 if(n>99 && n<1000)
 {
    printf("It is 3 digit number \n");
 }
else{
     printf("It is not 3 digit number \n");
}


  
                                                // Question 2//
// Take positive integer input and tell if it is divisible by 5 and 3.

int ni;
 printf("Enter a positive integer\n");
 scanf("%d",&ni);
 if(ni%3==0 && ni%5==0 )             
 {
    printf("It is divisible by 3 and 5 \n");
 }
else{
     
    printf("It is not divisible by 3 and 5 \n");
 }




                                      
                                      // Question 3//
// Take positive integer input and tell if it is divisible by 5 or 3.

int nii;
 printf("Enter a positive integer\n");
 scanf("%d",&nii);                                       
 if(nii%3==0 || nii%5==0 ) {           
    printf("It is divisible by 3 or 5 \n");
 }
else{
     
    printf("It is not divisible by 3 or 5 \n");
 }



                                             //*Ques:4 important

 // Take 3 positive integers input and print the greatest of them. (all 3 are distinct)

 
 int n1, n2, n3;
    
    printf("Enter a n1 positive integer\n");
    scanf("%d", &n1);
    
    printf("Enter a n2 positive integer\n");
    scanf("%d", &n2);
    
    printf("Enter a n3 positive integer\n");
    scanf("%d", &n3);
    
    if (n1 > n2 && n1 > n3) {
        printf("Greatest number is n1: %d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Greatest number is n2: %d\n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("Greatest number is n3: %d\n", n3);
    } else {
        printf("There is a tie or all numbers are equal.\n");
    }
    
         //*Ques:5 important
 // Take 4 positive integers input and print the greatest of them. (all 4 are distinct)

 int a1;
 printf("\n Enter a a1  positive integer\n");
 scanf("%d",&a1);
 int b2;
 printf("Enter a b2 positive integer\n");
 scanf("%d",&b2);
 int c3;
 printf("Enter a c3 positive integer\n");
 scanf("%d",&c3);
 int d4;
 printf("Enter a d4 positive integer\n");
 scanf("%d",&d4);
 if(a1>b2 && a1>c3 && a1>d4)
{
    printf("\ngreatest number in a1 : %d",a1);
}
if(b2>c3 && b2>d4 && b2>a1)
{
    printf("\ngreatest number in b2 : %d",b2);
}
if(c3>a1 && c3>b2 && c3>d4)
{
    printf("\ngreatest number in c3 : %d",c3);
}
if(d4>a1 && d4>b2 && d4>c3)
{
    printf("greatest number in d4 : %d",d4);
}
    return 0;
    

}