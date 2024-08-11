#include<stdio.h>
int main()
{
  // Take float input and print the fractional part of the real number ?
   float c;
   printf("Type the input");
   scanf("%f",&c);
   int d = c ;
   float e = c-d;
   printf("The output is = %f \n",e);  


   // hierarchy of Operators//
   // BODMASD where bracett , order ,divide / multiplie , add/subtract//

   int i = 2 * 3 / 4+4 /4+8-2+5/8;
    //   = 6/ 4   +4 /4+8-2+5/8;
   //    = 1     +4 /4+8-2+5/8;
     //  = 1     +1   +8-2+5/8; 
     //  = 1 +   1  +8-2  +0;
    //   = 8
   printf("%d\n",i);
  



   int j = 5*2/3-4+3/2+2*8-2;
  //  how computer solve//
       //=10/3-4+3/2+2*8-2//
     //  =3-4+3/2+2*8-2
     //  =3-4+ 1 +16 -2
     //  =-1+1 +14
     // = 14  
   printf("%d\n",j);

 float k = 2*3/4 +3-4/4+5+2-8/16;
 //    k = 6/ 4 +3-1+5+2-0
 //    k =1+2+7
    // k =10.000;
 printf("%f\n",k);


  return 0;

}