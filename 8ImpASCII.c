#include <stdio.h>
int main ()
{ 
    /* ASCII VALUE The ASCII (American Standard Code for Information Interchange)
       value of a character is a numerical representation used in computing. Each character is assigned
       a unique ASCII value ranging from 0 to 127 (in the standard ASCII set) or 0 to 255 (in the extended ASCII set). 
       These values allow computers to understand and process text characters.

       For example:

      The ASCII value of the letter 'A' is 65.
      The ASCII value of the digit '0' is 48.
      The ASCII value of the symbol '+' is 43.
      Is there a specific character you'd like to know the ASCII value of?*/


      // HOW TO FIND VALUE OF ASCII VALUE ?//
      // E X A M P L E
      /*
      = = 61
      A = 65     a = 97
      B = 66     b = 98
      C = 67     c = 99
      ....       ....
      Z =90     z =122
      Extra
      space =32
       +    =43
       -    =45
       .    =46
       *    =42
       /    =47
       =    =61
       @    =64
      
       

      etc
            */
    char ca = 'A';
    printf("%d\n",ca);
    char ca26 = 'Z';
    printf("%d\n",ca26);
    char sm = 'a';
    printf("%d\n",sm);
    char sm26 = 'z';
    printf("%d\n",sm26);
    char c = '!';
    printf("%d\n",c);
///


//ASCII IS 7 BITS BINARY SYSTEM 
 
 2^n-1
 =2^7-1
 = 2^6
 =64




///////////////LETTER TO BINARY DIGITS

// QUESTION 1 WHAT IS THE BINARY CODE OF Blue ?


 LETTER          |     DECIMALS (ASCII VALUE)  | BINARY digit
                                                 64,32,16,8,4,2,1
 B               |       66                    | 1   0  0 0 0 1 0 
                                                (HERE WE EQUAL DECIMALS DIGIT WITH THE HELP OF 0,1 ITS WORKS LEFT TO RIGHT)
 l               |      108                    | 1  1 0 1 1 0 0              

 u               |      117                    | 1  1  1 0 1 0 1

 e               |      101                    | 1  1  0 0 1 0 1



BINARY CODE OF Blue = 1000010110110011101011100101


// QUESTION 2 WHAT IS THE BINARY CODE OF AAMIR ?


 LETTER          |     DECIMALS (ASCII VALUE)  | BINARY digits
                                                 64,32,16,8,4,2,1
 A               |       65                    | 1   0  0 0 0 0 1 
                                                (HERE WE EQUAL DECIMALS DIGIT WITH THE HELP OF 0,1 ITS WORKS LEFT TO RIGHT)
 A               |       65                    | 1   0  0 0 0 0 1               

 M               |       78                    | 1  0  0 1 1 1 0

 I               |       73                    | 1  0  0 1 0 0 1

 R               |       83                    | 1  0  1 0 0 1 1



BINARY CODE OF AAMIR = 10000011000001100111010010011010011



// QUESTION 3 BINARY DIGIT TO WORD 

 BINARY Digits    | DECIMALS (ASCII VALUE) | LETTER

 1001100          | 76                     | L 
 1100101          |101                     | e 
 1101101          |109                     | m 
 1101111          |111                     | n 


 WORD IS = Lemon

    return 0;
}