//Q31. Grade System Using Else-If Ladder
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int mark=get_int("Enter mark ");
if(mark>=0 && mark<=100)
{

if(mark>=80 &&  mark<=100){printf("Grade A");}
else if(mark>=70 &&  mark<=79){printf("Grade B");}
else if(mark>=60 &&  mark<=69){printf("Grade C");}
else if(mark>=50 &&  mark<=59){printf("Grade D");}
else {printf("Grade F");}

}
else {printf("Invalid Mark");}
    return 0;
}
