//Q30. Largest of three numbers (handle tie).
#include <stdio.h>
#include <cs50.h>
int main(void)
{
int a=get_int("Enter a ");
int b=get_int("Enter b ");
int c=get_int("Enter c ");

if(a>b && a>c){printf("a is largest\n");}
else if(b>a && b>c){printf("b is largest\n");}
else {printf("c is largest\n");}

 if(b==c){printf("b and c are equal");}
else if(a==b){printf("a and b are equal");}
else if(a==c){printf("a and c are equal");}

else{printf("a,b,c are equal");}
return 0;
}
