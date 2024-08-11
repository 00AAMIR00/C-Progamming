 #include <stdio.h>
 
 int main(void)
 {
    // Print the pattern  1     Floyd traingle
    //                    2 3
//                        4 5 6
//                        7 8 9 10
  //    
 int n = 4;
 int k =1;
  for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
     printf("%d",k);
     k++;
     
    }
    printf("\n");
  }
 


 // Print the pattern     1     HW traingle
    //                    3  5
//                        7  9  11
//                        13 15 17 19
  // 
  int m = 4;
 int l =1;
  for (int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
     printf("%d ",l);
     l=l+2;
     
    }
    printf("\n");
  }
    
    return 0;
 }
 