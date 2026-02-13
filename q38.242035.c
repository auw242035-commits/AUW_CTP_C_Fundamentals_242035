/*Q38. Sum of Array Elements
Take 5 integers as input and store them in an array.Requirements:• Use a loop to calculate sum.• Print total sum.Output Format Example:Sum = 25*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n[5];
int i;
int sum=0;
for(i=0;i<5;i++)
{n[i]=get_int("Numbers ");
sum=sum+n[i];}
printf("%d ",sum);
 return 0;
}
