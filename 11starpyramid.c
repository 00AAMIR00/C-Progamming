 #include <stdio.h>
 
 int main(void)
 {
 /*
    print the given pattern        *
                                  ***
                                 *****
                                *******
    */
     for(int i=1;i<=4;i++){
      for(int j=1;j<=4-i;j++){
         printf(" ");
      }
      
      for (int k=1;k<=2*i-1;k++){   // here we use ARITHMETHICAL PROGRESSION FORMULA: Tn=a(n-1)*d > Tn=1(n-1)2>tn=2n-1 where n is number of terms so we can use as i int.  
      printf("*");
      }
      printf("\n");
     }
          ///new ways

 int nst = 1;  // for no maths or we can 
    for(int i=1;i<=4;i++){
      for(int j=1; j<=4-i;j++){
         printf(" ");
      }
      for (int k=1;k<=nst;k++){
         printf("*");
      }
       nst = nst+2;
      printf("\n");  
    }

              // HOME WORK //

    /*
    print the given pattern        1
                                  123
                                 12345
                                1234567
    */
    int ndt =1;
    for(int i=1;i<=4;i++){
      for(int j=1;j<=4-i;j++){
         printf(" ");
      }
     for (int k=1;k<=ndt;k++){      // 1(n-1)1= 1+1n-1
           printf("%d",k);
     }
     ndt = ndt+2;
     printf("\n");
    }


                            /// HOME WORK//

/*
    print the given pattern        A
                                  ABC
                                 ABCDE
                                ABCDEFG
    */
      char ch ='A';
    for(int i=1;i<=4;i++){
      for(int j=1;j<=4-i;j++){
         printf(" ");
      }
      for (int k=1;k<=2*i-1;k++){
         printf("%c",ch);
         ch++;
     }
    ch = 'A';
     printf("\n");
    }
    return 0;
 }
 