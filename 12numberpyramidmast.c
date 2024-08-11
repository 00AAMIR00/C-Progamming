 #include <stdio.h>
 
 int main(void)
 {
  /*This program is to print pyramid/triangle number pattern
         1
        121
       12321
      1234321
  */
  for (int i=1;i<=4;i++){  // line code loop
    for(int j=1;j<=4-i;j++){ // space code loop
      printf(" ");
    }
    for(int k=1; k<=i;k++){ // star pyramid loop
      printf("%d",k);
    }
    int a = i-1; // print variable
    for(int q=1; q<=i-1;q++){// extra loop for extra component
      printf("%d",a);
      a--;               // decrement of a so that we can get accurate result
    }
    printf("\n");
  }
  //
  printf("\n"); // extra space
                                     //    Home work//

    /*This program is to print pyramid/triangle number pattern
         A
        ABA
       ABCBA
      ABCDCBA
  */

   for (int i=1;i<=4;i++){  // four line loop code
    for(int q=1;q<=4-i;q++){  // space line loop code
      printf(" ");

    }
    for(char ch='A'; ch<'A'+i; ch++){  // alphabeth pyramid loop code
      printf("%c",ch);
    
    }
    for(char ch = 'A'+i-2;  ch>='A';ch--){ // EXTRA LOOP 
       printf("%c", ch);
   }
    printf("\n");
   }                                 


    return 0;
 }
 