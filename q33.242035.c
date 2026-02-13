//Q33. Temperature Classification
#include <stdio.h>
#include <cs50.h>
int main(void)
{
float t=get_float("Enter temparature ");
if(t<20){printf("Cold");}

else if(t>=20 && t<=30){printf("Cold");}
else {printf("Hot");}

 return 0;
}
