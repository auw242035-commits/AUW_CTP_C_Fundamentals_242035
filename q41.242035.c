/*Q41. Array of Floats — Declaration, Initialization, and Printing
Create an array of 5 float numbers.
Requirements:
• Declare a float array of size 5.
• Initialize it with any decimal values (example: 2.5, 3.1, 4.8, 1.2, 9.6).
• Use a loop to print all elements.
• Print values with 2 decimal places.
Output Example:
Float Values: 2.50 3.10 4.80 1.20 9.60*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{

float X[5]={2.5,3.1,4.8,1.2,9.6};
int i;

for(i=0;i<5;i++)
{
printf("%.2f ",X[i]);
}
    return 0;
}
