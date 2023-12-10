//C program to convert number from octal to binary.
#include<stdio.h>
int main()
{
 int number;
 printf("Enter Octal number :");
 scanf("%d",&number);


 int rem;
 int binary_number=0;
 int base=1;
 while(number)
 {
   rem=number%10;
   number=number/10;

   while(rem>0)
   {
     binary_number=binary_number+(rem%2)*base;
     rem=rem/2;
     base=base*10;

   }

 }

 printf("\nBinary number = %d",binary_number);

   return 0;
}










