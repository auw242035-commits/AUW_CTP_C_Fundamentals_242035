//Q29. Largest of two numbers (handle equal).
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int a=get_int("Enter a ");
int b=get_int("Enter b ");
if(a>b)
{printf("a is larger");}
else if(b>a){printf("b is larger");}
else{printf("a and b are equal");}
    return 0;
}
