//Q24. Input n → Print reverse triangle.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n= get_int("Enter n ");
int i,j;
for(i=n;i>=1;i--)
{
 for(j=1;j<=i;j++)
{printf("*");}

printf("\n");
}
  return 0;
}
