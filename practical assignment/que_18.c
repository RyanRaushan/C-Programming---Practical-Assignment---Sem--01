//18. Write a program to print the pattern below.
#include <stdio.h>
#include <conio.h>
int main()
{
   int k;
   for (int i = 1; i <= 5; i++)
   {
     
      for (int j = 1; j <= 9; j++)
      {
         if (j >= 6 - i && j <= 4 + i && k)
         {
            printf("*");
            k = 0;
           
         }
         else
         {
            printf(" ");
            k = 1;
         }
      }
      printf("\n");
   }
   return 0;
}