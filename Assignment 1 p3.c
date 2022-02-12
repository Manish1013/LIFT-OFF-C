#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d,&x");
    switch(x%2){
    case 0:
    printf("The number is even");
    break;
    case 1:
    printf("The number is odd");
    break;
    }
    return 0;
}