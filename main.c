#include <stdio.h>
 int main(){
  double pi = 3.14;
  float A,B,S;
  int C;
  printf("enter your number");
  scanf("%f",&A);
  if(A>=1){
   B = A - 1;
    while(B>0 && B>=1){
        B=B-1;
    }
    if(B>=0.5){
      A= A - B + 1;
    }
    else{
      A = A - B;
    }
    printf("%f\n",B);
  printf("your rounded number is: %f",A);
  }
  if(A>=0 && A<1){
   if(A<0.5){
    printf("your number is 0");
   }
   else{
    printf("your number is 1");
   }   
  }
  if(A<0){
    B = A + 1;
    while(B<=-1 && B<0){
      B = B + 1;
    }
    printf("%f\n",B);
    if(B>=-0.5){
      A = A - B;
    }
    else{
      A = A-B-1;
    }
    printf("your rounded number is: %f",A);
  }
    }
   
