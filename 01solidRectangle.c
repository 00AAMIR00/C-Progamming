 #include <stdio.h>
 
 int main(void)
 {
    /* WAP TO PRINT *****
                    *****
                    *****                          
                                                  */ 
        int n;
        printf("Enter the numbers of row ");
        scanf("%d",&n);
        int m;
        printf("Enter the numbers of coloum ");
        scanf("%d",&m);
        for(int i=1; i<=n; i++){ // 3 represent no of line
        for (int j=1;j<=m;j++) { //NESTED LOOP // 5 represent no of *
        printf("*");
        }
        printf("\n");
        }



                                           //HW QUESTION

/* WAP TO PRINT ****
                ****
                ****                          
                ****                                  */ 
         int o;
        printf("Enter the numbers of row ");
        scanf("%d",&o);
        for(int i=1; i<=o; i++){ // 3 represent no of line
        for (int j=1;j<=o;j++) { //NESTED LOOP // 5 represent no of *
        printf("*");
        }
        printf("\n");
        }


// PRINT THE GIVEN PATTERN  1234
//                          1234
//                          1234
//                          1234
int p;
    printf("Enter the numbers of line  ");
    scanf("%d",&p);
int v;
        printf("Enter the numbers of coloums ");
        scanf("%d",&v);
for(int i=1;i<=p; i++){
  for(int j=1;j<=v;j++){
  printf("%d",j);} 
  printf("\n");
  }
    return 0;
 }
 