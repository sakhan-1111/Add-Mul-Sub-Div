#include <stdio.h>
#include <conio.h>

int main()
{
    float x,y,add,mul,sub,div;
    printf("Enter the value of x =");
    scanf("%f", &x);
    printf("Enter the value of y =");
    scanf("%f", &y);
    add = x+y;
    mul = x*y;
    sub = x-y;
    div = x/y;
    printf("Addition of x&y is = %f\n",add);
    printf("Multiplication of x&y is = %f\n",mul);
    printf("Substraction of x&y is = %f\n",sub);
    printf("Division of x&y is = %f",div);
    return 0;
}
