 #include <stdio.h>
 
 int main(void)
 {
  // Print the pattern    *  
    //                    *
//                      *****
//                        *
  //                      * 
 
int n=5;
for (int i = 1 ; i<=5;i++ ){ 
   
   for ( int j =1;j<=5 ;j++) { 

    if( i==3 ||j==3) printf("*");

    else printf (" ");
   }
    printf("\n");
}



// Print the pattern     ##*##  
    //                   ##*##
//                       *****
//                       ##*##
  //                     ##*## 

printf("\n");
for (int i = 1 ; i<=5;i++ ){ 
   
   for ( int j =1;j<=5 ;j++) { 

    if( i==3 ||j==3) printf("*");

    else printf ("#");
   }
    printf("\n");
}
 



 ///         H W QUESTION

 /*PRINT THE PATTERN 
                             ******
                             *    *
                             *    *
                             ******                                   */
 
 printf("\n");
for (int i = 1 ; i<=4;i++ ){ 
   
   for ( int j =1;j<=6 ;j++) { 

    if( i==1 || i==4 ||j==1 || j==6) printf("*");

    else printf (" ");
   }
    printf("\n");
}
    return 0;
 }
 