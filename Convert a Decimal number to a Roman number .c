//C program to convert a Decimal number to a Roman number.  
#include<stdio.h>
int main()
{
   int number;
   printf("Enter any decimal number :");
   scanf("%d",&number);
   
   while(number>0)
   {
    
    if(number>=1000)
    {
        printf("M");
        number-=1000;
    }

    else if(number>=500) 
      {
        printf("D");
        number-=500;
    }

 
    else if(number>=100) 
      {
        printf("C");
        number-=100;
      }

      else if(number>=50) 
      {
        printf("L");
        number-=50;
      }

      else if(number>=10) 
      {
        printf("X");
        number-=10;
      }

      
      else if(number>=5) 
      {
        printf("V");
        number-=5;
      }

        
      else if(number>=1) 
      {
        printf("I");
        number-=1;
      }


   }



    return 0;
}










