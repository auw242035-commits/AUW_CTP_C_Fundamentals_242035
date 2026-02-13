//Function to find max of two numbers.
#include <stdio.h>
#include <cs50.h>
int max(int x, int y);
int main(void)
{printf("Max=%d\n",max(2,1));
}
int max(int x,int y){return(x>y)? x:y;}
