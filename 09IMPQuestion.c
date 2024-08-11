 #include <stdio.h>
 
 int main(void)
 {
    /*
    print pattern of   1
                       01
                       101
                       0101
                       10101
    */
    
   int k =5;
   for(int i=1;i<=k;i++){ 
   for(int j=1;j<=i;j++){ 
   if((i+j)%2==0) printf("1");
   else printf("0");
   }
   printf("\n");
   }



/*
    print pattern of   1
                       01
                       101
                       0101
    */
    printf("\n");
    int n = 4;
    int a;
    for(int i=1; i<=n;i++){  
     if(i%2!=0) a=1; // IMP START line  //if i is odd than a=1
     else a=0;
    for(int j=1;j<=i;j++){ 
    printf("%d",a);
    if (a==0) a=1; // IMP Swtich line // if a==0 turn them a=1
    else a=0;//else a==1 turn them a=0
    }
     printf("\n");
    }
/*
    print pattern of   0
                       10
                       010
                       1010
    */
    printf("\n");
       int m = 4;
    int b;
    for(int i=1; i<=m;i++){  
     if(i%2!=0) b=0; // IMP START line  //if i is odd than a=1
     else b=1;
    for(int j=1;j<=i;j++){ 
    printf("%d",b);
    if (b==0)b=1; // IMP Swtich line // if a==0 turn them a=1
    else b=0;//else a==1 turn them a=0
    }
     printf("\n");
    }
    return 0;
 }
 