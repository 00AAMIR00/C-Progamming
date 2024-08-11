 #include <stdio.h>
 
 int main(void)
 {

/*
  PRINT THE GIVEN PATTERN  
  1234567
  123 567
  12   67
  1     7
  
*/

   int n=3;        // create n variable 
int nst = n;    // no if star 
int nsp = 1;    // no of space zero in first line 
int m =2*n+1;    // for first line

for(int i=1;i<=2*n+1;i++){ // to create first line 
  printf("%d",i);
}
printf("\n");
for(int i=1;i<=n;i++){ // for n=3 star line loop
int a =1;
  for(int j=1;j<=nst;j++){
    printf("%d",a);
    a++;
  }
  for(int k=1;k<=nsp;k++){ // for no of space line loop
    printf(" ");
    a++;                    // increment need to get answer
  }
   for(int j=1;j<=nst;j++){ // for n=3 star line loop
    printf("%d",a);
    a++;
}
    nst-=1;                 // increment & drcrement
    nsp+=2;
printf("\n");
}



    return 0;
 }
 