//C program to convert number from Octal to Decimal.

#include<stdio.h>
#include<math.h>



int main()
{

int number;
printf("Enter any octal number :");
scanf("%o",&number);


int rem;
int sum=0;
int j=0;

while(number)
{
  rem=number%10;
  sum=sum+rem*pow(8,j);
  j++;
  number=number/10;
}

printf("Decimal value = %d",sum);

  return 0;
}










