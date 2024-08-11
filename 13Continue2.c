#include <stdio.h>

int main(void)
{
     //Question : WAP to print even numbers from  1 to 100.
 
     for(int i = 1; i<=100;i++)
     {
        if (i%2!=0){
            continue;
        }
          printf("%d\n",i);

     }

    //Question : WAP to print odd numbers from  1 to 100.
 
     for(int j = 1; j<=100;j++)
     {
        if (j%2==0){
            continue;
        }
          printf("%d\n",j);

     }
    return 0;
}
