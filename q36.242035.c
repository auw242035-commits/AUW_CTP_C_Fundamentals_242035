/*Q36. Array Declaration, Initialization, and Printing
Create an integer array of size 5.
Requirements:
• Declare an array of 5 integers.
• Initialize the array with any 5 values (example: 10, 20, 30, 40, 50).
• Use a loop to print all elements.
Output Format Example:
Array Elements: 10 20 30 40 50*/

#include <stdio.h>
#include <cs50.h>
int main(void)
{
int x[5]={10,20,30,40,50};
int i;
for(i=0;i<5;i++)
{printf("%d ",x[i]);}

 return 0;
}
