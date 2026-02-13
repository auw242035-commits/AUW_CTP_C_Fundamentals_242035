/*Q39. Average of Array Elements
Take 5 integers as input and store in array.
Requirements:
• Calculate sum using loop.
• Calculate average using formula:
average = sum / 5.0
• Print average with 2 decimal places.
Output Format Example:
Average = 12.40*/

#include <stdio.h>
#include <cs50.h>
int main(void)
{int i;
int n[5];
int sum=0;
for(i=0;i<5;i++)
{n[i]=get_int("Enter integers %d ",i+1);}
for(i=0;i<5;i++)
{sum=sum+n[i];}
printf("sum=%d ",sum);
float avg=sum/5.0;
printf("avg=%f ",avg);
 return 0;
}
