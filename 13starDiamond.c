 #include <stdio.h>
 
 int main(void)
 {
   /* 
    PRINT THE GIVEN PATTERN        
    ---*
    --***
    -*****
    *******
    -*****
    --***
    ---*
   
   */
    
     int n;
     printf("Enter the number ");
     scanf("%d",&n);
     int nsp = n/2;
     int nst =1;
     int mid = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<mid){ 
        nsp--;
        nst+=2;
        }
        else {
        nsp++;
        nst-=2;
        }
        printf("\n");
    }
     // MY WAY 

  for (int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        printf(" ");
    }
   
    for(int k=1;k<=2*i-1;k++){
        printf("*");
        
    }
    printf("\n");
    }

//


  int rows = 3; // Number of rows for the pattern

    // Loop for each row
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i+1; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 0; j < 5 - 2 * i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

   
   
    return 0;
 }
 