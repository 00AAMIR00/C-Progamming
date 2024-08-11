 #include <stdio.h>
 
 int main(void)
 {

/*
  PRINT THE GIVEN PATTERN  
  *******
  *** ***
  **   **
  *     *
*/


int n=3;        // create n variable 
int nst = n;    // no if star 
int nsp = 1;    // no of space zero in first line 
int m =2*n+1;
for(int i=1;i<=2*n+1;i++){ // to create first line 
  printf("*");
}
printf("\n");
for(int i=1;i<=n;i++){ // for n=3 star line loop
  for(int j=1;j<=nst;j++){
    printf("*");
  }
  for(int k=1;k<=nsp;k++){ // for no of space line loop
    printf(" ");
  }
   for(int j=1;j<=nst;j++){ // for n=3 star line loop
    printf("*");
}
    nst-=1;                 // increment & drcrement
    nsp+=2;
printf("\n");
}

    return 0;
 
 }