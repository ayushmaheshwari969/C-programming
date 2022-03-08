#include <stdio.h>

int fact(int);

int main()
{
    int num;
    int factorial;
    
    printf("Enter the number\n");
    scanf("%d", &num);
    factorial = fact(num) ;
    
    printf("\nFactorial of %d is : %d \n" , num , factorial);
    
    return 0 ;
}

int fact(int num)
{
   int i ;
   int facto  = 1;
   for (i = 1 ; i <=num ; i++ )
   {
       facto = facto * i ;
   }
   return facto ;
}

