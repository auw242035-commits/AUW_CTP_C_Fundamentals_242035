/*Q43. Array of Strings (Multiple Names)
Store 3 names using an array of strings. Requirements:
• Create array to store 3 words (names).• Take input for each name using loop.• Print all names one per line. Output Example: Names:Amina Sara Lima*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{
string X[3];
int i;

for(i=0;i<3;i++)
{X[i]=get_string("Enter name ");}

for(i=0;i<3;i++)
{printf("%s\n",X[i]);}

return 0;
}
