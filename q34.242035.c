//Q34. Voting Eligibility (Nested Condition)
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int age =get_int ("Enter age ");
int citizenship=get_int ("Enter 1 if citizen else 0 ");
if(age>=18)
{
if(citizenship==1){printf("Eligible to Vote");}
else{printf("Not Eligible (Not Citizen)");}
}

else{printf("Not Eligible (Under Age)");}

 return 0;
}
