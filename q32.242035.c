//Q32. Age Category Classification
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int age=get_int("Enter age ");
if(age>0)
{
if(age>=0 && age<=12){printf("Child");}
else if(age>=13 && age<=19){printf("Teen");}
else if(age>=20 && age<=59){printf("Adult");}
else {printf("Senior");}
 }
 else{printf("Invalid age");}
 return 0;
}
