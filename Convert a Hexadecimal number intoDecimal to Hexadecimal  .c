//C program to convert a Hexadecimal number intoDecimal to Hexadecimal.

#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{

  char hexa[100];
  printf("Enter any hexadecimel value :");
  gets(hexa);

  int len=strlen(hexa);
  int sum=0;
  int j=0;

  for(int i=len-1;i>=0;i--)
  {
    if(hexa[i]>='0' && hexa[i]<='9')
    {
      sum=sum+(hexa[i]-48)*pow(16,j);
      j++;
    }

    else if(hexa[i]>='A' && hexa[i]<='F')
    {
      sum=sum+(hexa[i]-55)*pow(16,j);
      j++;
    }

  }


printf("\nDecimal value of %s = %d\n",hexa,sum);



char hexadecimal[100];
int rem;
int i=0;


while(sum)
{

 rem=sum%16;
 if(rem<10)
 {
  rem=rem+48;
 }

 else
 {
  rem=rem+55;
 }

 hexadecimal[i++]=rem;
 sum=sum/16;

 }  

 printf("\nHexadecimal value = ");
 for(int K=i-1;K>=0;K--)
 {
  printf("%c",hexadecimal[K]);
 }


  return 0;
}

