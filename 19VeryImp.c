 #include <stdio.h>
 
 int main(void)
 {
     //Question 1: Print the sum of this series : 1-2+3-4+5-6+7.... up to `n` term 
    
    
     int n;
     printf("Enter the `n` term ");
     scanf("%d",&n);
     int sum=0;
     for(int i=1;i<=n;i++){
        if (i%2!=0)
        {
            sum=sum+i;
        }
        else sum = sum-i;
     }
     printf ("The sum of the series is %d",sum);
    
    // in that if number of n is higher the loop will be 
    //bigger and makes problem for computer

    //IF N IS EVEN THE ANSWER WILL BE = -N/2

    // EXAMPLE : 1-2+3-4+5-6
           //     = (1-2)+(3-4)+(5-6)
         //       = -1-1-1
    //    ANSWER  = -3
    
   //  IF N IS ODD THE ANSWER WILL BE = -N/2+N
         
         // EXAMPLE : 1-2+3-4+5-6+7
             //   = (1-2)+(3-4)+(5-6)+7
            //    = -3               +7 =4
      //  ANSWER  = -N/2             +N
        //        = -N/2+N
         
                          //    SAME Question

int N;
     printf("Enter the `n` term ");
     scanf("%d",&N);
     int sum1=0;
     for(int i=1;i<=N;i++){
        if (i%2==0)
        {
            sum1=-N/2;
        }
        else sum1 = -N/2+N;
     }
     printf ("The sum of the series is %d",sum1);

    return 0;
 }
 