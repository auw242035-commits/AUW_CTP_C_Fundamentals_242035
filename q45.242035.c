/*Q45. Reverse Array Elements
Take 5 integers as input and store in an array. Requirements: • Print array elements in reverse order using loop. • Do NOT create another array (optional challenge).
Output Example: Reverse Order: 50 40 30 20 10*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int n[5];
int i;
int count=0;
for(i=0;i<5;i++){n[i]=get_int("Enter numbers ");}

for(i=4;i>=0;i--)
{
printf("%d\n",n[i]);
}

    return 0;
}
