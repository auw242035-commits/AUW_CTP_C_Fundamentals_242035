/*Q37. Array Input and Output Using Loop
Take 5 integer values from the user and store them inside an array.
Requirements:
• Use a loop to take input.
• Store values in array.
• Use another loop to print values in same order.
Output Format Example:
You Entered: 5 8 2 9 1*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{
  int i;
  int x[5];
 for(i=0;i<5;i++)

{ x[i]=get_int("Enter 5 values  ");}

for(i=0;i<5;i++)
{printf("%d ",x[i]);}

 return 0;
}
