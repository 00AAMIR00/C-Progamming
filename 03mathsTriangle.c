 #include <stdio.h>
 
 int main(void)
 {

// PRINT THE GIVEN PATTERN  1
//                          12
//                          123
//                          1234

int o = 4 ;
 for(int i=1;i<=o;i++){ //  line code loop 
   for(int j=1;j<=i;j++){  
   printf("%d",j);
   }
   
   printf("\n");
 }

// PRINT THE GIVEN PATTERN  1234
//                          123
//                          12
//                          1

int n;
 printf("Enter the number ");
 scanf("%d",&n);
 for(int i=n;i>0;i--){ //  line code loop in reverse stairs
   for(int j=1;j<=i;j++){  
   printf("%d",j);
   }
   printf("\n");
 }


// PRINT THE GIVEN PATTERN  1
//                          13
//                          135
//                          1357
   
int l;
 printf("Enter the number ");
 scanf("%d",&l);
for(int i=1;i<=l;i++){
  int k =1;
  for(int j=1;j<=i;j++){
  printf("%d",k);
  k = k+2;
  }
  printf("\n");
}

/*                                       diffrent way                                                     
 int i, j;
    int num = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i * 2 - 1; j += 2) {
            printf("%d", j);
        }
        printf("\n");
    }
*/

   return 0;
 }
 