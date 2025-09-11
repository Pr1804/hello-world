#include<stdio.h>
int main()
{
   char op;
   double num1,num2;

   printf("enter an operator (+,-,*,/):");
   scanf("%c" , &op);
   printf("enter two numbers: ");
   scanf("%1f %1f", &num1,&num2);

   switch (op)
{
   case'+':printf("RESULT=%.21f%",num1+num2):break;
   case'-':printf("RESULT=%.21f%",num1-num2):break;
   case'*':printf("result=%.21f%,num1*num2):break;
   case'/':
            if (num2 !=0)
               printf("RESULT"=%.21f%,num1/num2):break;
             else
              printf("error ! divison by zero. ");
                 break;
            default:printf("invalid operator");
}
return 0;
}
