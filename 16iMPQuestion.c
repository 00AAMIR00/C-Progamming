#include <stdio.h>

int main(void)
{

    In C programming, a "garbage value" 
    is the random or indeterminate value stored in a variable when it is declared but not initialized.
    This occurs because the memory allocated to the variable retains whatever data was previously stored there.

 Question 1
  
  Predict the output
  main() {
    int j;
    while(j<=10){
        printf("\n%d",j);
        j=j+1;
    }
  }
ANSWER : WILL BE NEW LINE RANDOM BECAUES OF UNDEFINED VALUE OF j so that garbage value will predict the answer .

 Question 2 

 Predict the output

main() {
    int x = 1;
    while(x==1){
        x=x-1
        printf("\n%d",x);

    }
  }
ANSWER:
       0 

 Question 3

 Predict the output
main() {
int x = 4, y, z ;
y = --x;
z = x--;
printf("\n%d %d %d", x, y, z) ;
}

ANSWER: 
 x=2 y=3 z=3  

  Question 4

 Predict the output
main() {
int x = 4, y=3, z ;

z = x-- -y;
printf("\n%d %d %d", x, y, z) ;
}

Answer: x=3 y=3 z=1

 Question 5

 Predict the output
main() {
 while('a'<'b')
 printf("\nmalayalam is palindrone")
}
ANSWER: ASCII value of a 97 , b 98 
       INfinte loop 

Question 6

 Predict the output
main() {
    int i =10;
 while(i=20)
 printf("\nA computer buff!")
}
ANSWER:INfinte loop 

Question 7

 Predict the output
main() {
    int i;
 while(i=10)
 printf("\n%d",i);
 i=i+1;
}
ANSWER:INfinte loop 

Question 8

 Predict the output
main() {
int x = 4, y=0, z ;
while(x>=0){
    x--;
    y++;
    if(x==y)
      continue ;
    else 
       printf("\n%d %d %d,x,y")
}


}

Answer: x=3 y=1 


    return 0;
}
