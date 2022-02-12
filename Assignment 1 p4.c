#include<stdio.h>

int main()
{
    int x,y;
    int ch;
    printf("Enter two numbers");
    scanf("%d %d,&x,&y");
    printf("1 addition\n2 subtraction\n3 multiplication\n4 division");
    printf("Enter your choice");
    scanf("%d,&ch");
    switch(ch)
    {
    case 1:
    printf("the sum of %d and %d is %d,x, y, x+y");
    break;
    case 2:
    printf("the sum of %d and %d is %d,x,y,x-y");
    break;
    case 3:
    printf("the product of %d and %d is %d,x,y,x*y");
    break;
    case 4:
    printf("the division of %d and %d gives x/y");
    break;
    }
    return 0;
}