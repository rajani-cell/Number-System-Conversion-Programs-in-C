//C program to convert a Binary number to a Hexadecimal number.


#include<stdio.h>
#include<math.h>
#include<string.h>


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
   char hexa[100];
   int i=0;

   while(sum)
   {
     rem1=sum%16;
     if(rem1<10)
     {
        rem1=rem1+48;
     }

     else
     {
        rem1=rem1+55;
     }

     hexa[i++]=rem1;
     sum=sum/16;

    

   }


   printf("\nHexadecimal number of %d =", orginal_number);
   for(int j=i-1;j>=0;j--)
   {
    printf("%c",hexa[j]);
   }
     


    return 0;
}










