//Q35. Leap Year Check (Validation + Else-If)

#include <stdio.h>
#include <cs50.h>
int main(void)
{
int YEAR =get_int ("Enter Year ");
if(YEAR==0){printf("Invalid Year");}
else if (YEAR%400==0) {printf("Leap year");}
else if (YEAR%4==0){printf("Leap year");}
else if(YEAR%100==0){printf("Not a leap year");}

else{printf("Not a leap year");}

 return 0;
}
