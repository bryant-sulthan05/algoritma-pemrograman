#include <stdio.h>

int a, b, c = 0;

int product(int x, int y);
void hitReturn();

int main()
{
    // printf("Value of a = %d, a");
    // printf("\n");

    // input the first number
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    // input the second number
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &b);

    c = product(a, b);
    printf("%d times %d = %d\n", a, b, c);

    hitReturn();

    getchar();
    return 0;
}

/* Function returns the product of its two arguments */
int product(int x, int y)
{
    return (x * y);
}

// function informs the user to hit the enter button
void hitReturn()
{
    printf("\n");
    printf("hit the enter button to exit the program");
    printf("\n");
}