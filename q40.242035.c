/*Q40. Find Largest Element in Array Take 5 integers as input and store them in array.
Requirements:
• Assume first element is largest.
• Use loop to compare remaining elements.
• Update largest value if bigger number found.
• Print largest value.
Output Format Example: Largest = 99*/
#include <stdio.h>
#include <cs50.h>
int main(void)
{int i;
    int x[5],largest=0;
    for(i=0;i<5;i++){x[i]=get_int("Enter numbers ");}
if(i==0||x[i]>largest)
largest=x[i];}
printf("largest=%d", largest);
 return 0;
}
