//Q25. Input n → Print number triangle.
#include <stdio.h>
#include <cs50.h>
int main(void)
{int n=get_int("Enter n ");
int i,j;
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
{printf("%d ",j);}
printf("\n");
}
  return 0;
}

