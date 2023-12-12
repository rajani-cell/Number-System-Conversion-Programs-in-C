//C program to convert a Binary number to an Octal number.

#include<stdio.h>
#include<math.h>


int main()
{
   int number;
   printf("Enter any binary number :");
   scanf("%d",&number);
   int orginal_number=number;


   //convert binary to decimal.
   int j=0;
   int sum=0;
   int rem;

   while(number)
   {
     rem=number%10;
     sum=sum+rem*pow(2,j);
     j++;
     number=number/10;

   }

   printf("\nDecimal number of %d = %d.", orginal_number,sum);


   //convert decimal to octal

   int rem1;
   int arr[100];
   int i=0;

   while(sum)
   {
     rem1=sum%8;
     sum=sum/8;
     arr[i]=rem1;
     i++;

   }


   printf("\nOctal number of %d =", orginal_number);
   for(int j=i-1;j>=0;j--)
   {
    printf("%d",arr[j]);
   }
     


    return 0;
}










