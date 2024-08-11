 #include <stdio.h>
 
 int main(void)
 {

    /// Question wap to print   *  
    ///                         **
    ///                         ***
    ///                         ****

 int n;
 printf("Enter the number ");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){ 
   printf("* ");
   }
   printf("\n");
 }




    /// Question wap to print   ****  
    ///                         ***
    ///                         **
    ///                         *

 int m;
 printf("Enter the number ");
 scanf("%d",&m);
 int a = m;
 for(int i=1;i<=m;i++){
   for(int j=1;j<=a;j++){ 
   printf("* ");
   }
   a--;
   printf("\n");
 }
    


    return 0;
 }
 