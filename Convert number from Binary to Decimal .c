//C program to convert number from Binary to Decimal.

#include<stdio.h>
#include<math.h>



int main()
{

int number;
printf("Enter any binary number :");
scanf("%d",&number);


int rem;
int sum=0;
int j=0;

while(number)
{
  rem=number%10;
  sum=sum+rem*pow(2,j);
  j++;
  number=number/10;
}

printf("Decimal value = %d",sum);

  return 0;
}










