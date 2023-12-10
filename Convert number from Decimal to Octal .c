//C program to convert number from Decimal to Octal.
#include<stdio.h>
int main()
{
  int number;
  printf("Enter Decimal number :");
  scanf("%d",&number);

  int rem,i=0,arr[100];

  while(number)
  {
    rem=number%8;
    number=number/8;
    arr[i]=rem;
    i++;
  }

  for(int j=i-1;j>=0;j--)
  {
    printf("%d",arr[j]);
  }

   return 0;
}










