 #include <stdio.h>
 
 int main(void)
 {
    /*
    print the given pattern        *
                                  **
                                 ***
                                ****
    */
    int n = 4;
     for (int i = 1;i<=4;i++){
      for(int j = 1;j<=n-i;j++){
         printf(" ");
      }
      for(int k=1;k<=i;k++){
         printf("*");
      }
      printf("\n");
     }
     
       // home work 

 printf("\n");
     /*
    print the given pattern        ****
                                  ****
                                 ****
                                ****
    */

    for(int a=1;a<=4;a++){
      for(int b=1;b<=4-a;b++){
         printf(" ");
      }
      for(int c=1;c<=4;c++){
         printf("*");
      }
      printf("\n");
    }


    // home work 

 printf("\n");
/*
    print the given pattern        A
                                  AB
                                 ABC
                                ABCD
  */
   
   char ch ='A';
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4-i;j++){
         printf(" ");
      }
      for(int k=1;k<=i;k++){
      
         printf("%c",ch);
         ch++;
      }
        ch ='A';
      printf("\n");
   }

/*
    print the given pattern        A
                                  BC
                                 DEF
                                GHIJ
  */


    printf("\n");


  char cha ='A';
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4-i;j++){
         printf(" ");
      }
      for(int k=1;k<=i;k++){
         printf("%c",cha);
         cha++;
      }
      printf("\n");
   }
    return 0;
 }
 