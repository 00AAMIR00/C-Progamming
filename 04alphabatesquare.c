 #include <stdio.h>
 
 int main(void)
 {

  /*PRINT THE PATTERN 1234
                      1234
                      1234
                      1234
                                                      */
int p;
    printf("Enter the numbers of line  ");
    scanf("%d",&p);
  for(int i=1;i<=p; i++){
  for(int j=1;j<=p;j++){
  printf("%d",j);} 
  printf("\n");
  }
/*PRINT THE PATTERN   ABCD
                      ABCD
                      ABCD
                      ABCD
                                                      */

int Q;
    printf("Enter the numbers of line  ");
    scanf("%d",&Q);

  for(int i=1;i<=Q; i++){
    int x = 1;
    for(int j=1;j<=Q;j++){ 
      int d = x + 64;
      char ch =(char)d;
      printf("%c",ch);
      x++;
   }
     printf("\n");  
  }  




  
                                                                                                   
    return 0;
 }
 