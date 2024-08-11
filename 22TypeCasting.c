 #include <stdio.h>
 
 int main(void)
 {
  /// wHAT IS TYPE CASTING ? 
  // TYPE CASTING IS NOTHING BUT NEW WAY TO CONVERT A VARIABLE DATATYPE TO ONE ANOTHER DATATYPE 

  // example

  //int a = 5;
 // int b = 2;
      // (float) convert int a into float a 5.0
 //float c = (float)a/b;
 //printf ("%f",c);


 // WAP to Print all the capital alphabetic ascii value with their Alphabet ?
 for (int n =65; n<=90; n++)
 {
    printf("\n %d ",n);
    char ch = (char)n;
    printf("%c",ch);
 }


    return 0;
 }
 