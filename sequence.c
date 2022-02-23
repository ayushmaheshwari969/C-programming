//-1 , 4 , -7 , 10 , -13.....
#include<stdio.h>

int main()
{
    int n , num ;
    printf("enter the number for series limit\n");
    scanf("%d",&n );

num = -1 ;

 printf("%d ," , num);
  num = 1;
for (int i =1 ; i <= n-1 ; i++)
{

    num = num+ 3 ;
    if (num % 2 == 0)
        printf("%d," , num);
    else
        printf("-%d,", num);
}

    return 0 ;
}
