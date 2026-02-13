//Q27. Check even / odd (handle zero separately).
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int p=get_int("Enter a number ");
if(p%2==0)
{printf("Even");}
else if(p==0)
{printf("Even");}
else {printf("Odd");}

    return 0;
}
