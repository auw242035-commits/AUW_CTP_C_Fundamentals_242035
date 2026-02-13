/*Q44. Count Positive Numbers in an Array
Take 5 integers as input and store them in an array. Requirements:• Use a loop to check each number. • Count how many numbers are greater than zero. • Print total count.
Output Example: Positive Numbers Count = 3*/

#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n[5];
int i;
int count=0;
for(i=0;i<5;i++){n[i]=get_int("Enter numbers ");}

for(i=0;i<5;i++)
{if(n[i]>0)
    {count=count+1;}

}printf("%d ",count);

    return 0;
}
