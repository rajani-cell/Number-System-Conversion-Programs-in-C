//C program to convert a Binary number to Gray Code.

#include<stdio.h>
#include<math.h>
int main()
{
   int number;
   printf("Enter any binary number :");
   scanf("%d",&number);

   int orginal_number=number;

   int a,b;
   int gray=0;
   int i=0;

   while(number !=0)
   {

    a=number%10;
    number=number/10;
    b=number%10;

    if((a && !b) || (!a && b))
    {

       gray=gray+pow(10,i);
      
    }

     i++;

   }

   printf("Gray Code %d = %d",orginal_number,gray);




    return 0;
}







