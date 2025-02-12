#include <cs50.h>
#include <stdio.h>

int calc(void)

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = calc(x, y);

    printf("%i\n", z);
}

int calc(int a, int b)
{
    return a + b;
}