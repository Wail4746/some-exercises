#include<stdio.h>
int main(){
    float A,B,R;
    char opp;
    
    printf("enter your opp '+' ,'-' ,'*', '/', '%' '^' or 'R'for rounding numbers");
    scanf(" %c",&opp); 
    switch(opp){
        case '^':int n;
 float x;
 printf("write your number \"x\"");
 scanf("%f",&x);
 printf("write the power of the number ");
 scanf("%d",&n);
 if(n !=0){
 for (int i =1; i<=n;i++){ 
  x=x*x;
  i=i+1;
 }printf("%f",x);
 }
 else{
    if(x != 0){
        printf("your number is 1" );
    }
    else{
        printf("ERROR");
    }
 }break;
        case 'r':
        case 'R':printf("enter your number");
         float a,b,S;
  int C;
  printf("enter your number");
  scanf("%f",&a);
  if(a>=1){
   b = a - 1;
    while(b>0 && b>=1){
        b=b-1;
    }
    if(b>=0.5){
      a= a - b + 1;
    }
    else{
      a = a - b;
    }
    printf("%f\n",b);
  printf("your rounded number is: %f",a);
  }
  if(a>=0 && a<1){
   if(a<0.5){
    printf("your number is 0");
   }
   else{
    printf("your number is 1");
   }   
  }
  if(a<0){
    b = a + 1;
    while(b<=-1 && b<0){
      b = b + 1;
    }
    printf("%f\n",b);
    if(b>=-0.5){
      a = a - b;
    }
    else{
      a = a-b-1;
    }
    printf("your rounded number is: %f",a);
  }break;
        case '+':printf("write your first number :");
                 scanf("%f",&A);
                 printf("enter your second number :");
                 scanf("%f",&B);
                 R=A+B, printf("your result is : %f",R);break;
        case '-':printf("write your first number :");
                 scanf("%f",&A);
                 printf("enter your second number :");
                 scanf("%f",&B);
         R=A-B, printf("your result is : %f",R);break;
        case '*':printf("write your first number :");
                 scanf("%f",&A);
                 printf("enter your second number :");
                 scanf("%f",&B);
         R=A*B, printf("your result is : %f",R);break;
        case '/':printf("write your first number :");
                 scanf("%f",&A);
                 printf("enter your second number :");
                 scanf("%f",&B);
         if(B !=0){
        R=A/B, printf("your result is : %f",R);}
        else{printf("error");}break;
        case '%':printf("write your first number :");
                 scanf("%f",&A);
                 printf("enter your second number :");
                 scanf("%f",&B);
         if(B!=0){ R=(int)A%(int)B, printf("your result is : %d",(int)R);break;}
        else{printf("error");}break;
        default : printf(" error");
}   
 }