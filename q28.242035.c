//Q28. Check if number is in range 1–100.
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n=get_int("Enter a number ");
if(n>=1 && n<=100)
{printf("In the range");}
else{printf("Not in the range");}
    return 0;
}
