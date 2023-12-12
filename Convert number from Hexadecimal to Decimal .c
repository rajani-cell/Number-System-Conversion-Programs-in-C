//C program to convert number from Hexadecimal to Decimal.

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
   char hexa[100];
   printf("Enter any hexdecimal number :");
   gets(hexa);

   int len=strlen(hexa);
   int sum=0;
   int j=0;

   for(int i=len-1;i>=0;i--)
   {
      if(hexa[i]>='0' && hexa[i]<= '9')
      {

        sum=sum+(hexa[i]-48)*pow(16,j);
        j++;

      }

      else if(hexa[i]>='A' && hexa[i]<= 'F')
      {
          
        sum=sum+(hexa[i]-55)*pow(16,j);
        j++;
 
      } 

   }


   printf("\nDemimal number of %s = %d",hexa,sum);


    return 0;
}










