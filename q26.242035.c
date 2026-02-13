//Q26. Check positive / negative / zero.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int x=get_int("Enter a number ");
if(x>=0)
{printf("Positive");}
else if(x<=0)
{printf("Negetive");}
else {printf("Zero");}

    return 0;
}
