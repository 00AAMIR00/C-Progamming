 #include <stdio.h>
 
 int main(void)
 {
  /*PRINT THE PATTERN A
                      AB
                      ABC
                      ABCD
                                                      */   
     int w;
    printf("Enter the numbers of line  ");
    scanf("%d",&w);

  for(int i=1;i<=w; i++){  // line code
       int y = 1;             // extra varibale 
    for(int j=1;j<=i;j++){ // stair pattern print
      int e = y+64;    // use that extra varible so that program can use ascii value
      char cha =(char)e; // using char so that we can convert that value to Alphabte
      printf("%c",cha); // print that alphabet
      y++;              // increment on y so that ascii value will increace
   }
     printf("\n");  // new line when that loop will end
  }                                              

                        // New Question 
/*PRINT THE PATTERN   1
                      AB
                      123
                      ABCD
                      12345
                                                      */

  /* int n;
    printf("Enter the numbers of line  ");
    scanf("%d",&n);
    int x=1;
     for(int i=1;i<=n; i++){
        if (i==2 || i==4){
            for( int j =1; j<=i;j++)
            printf("%d ",j );
        }
        else   
          for(int j=0;j<i;j++){ 
             //int z = x+64;
             //char chr =(char)z;
             for (char ch = 'A'; ch < 'A' + i; ch++)
             printf("%c", ch);
             x++;
            }
        
        printf(" \n");
     }*/
 int num=5,r,c;
 char ch;
 for(r=1; r<=num; r++)
 {
  if(r==2 || r==4)
  {
   ch='A';
   for(c=1; c<=r; c++,ch++)
     printf("%c",ch);
  }
  else
  {
   for(c=1; c<=r; c++)
     printf("%d",c);
  }
  printf("\n");
 }
 return 0;
}