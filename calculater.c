#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Size: ");
    while(n < 2)
    {
        n = get_int("Size: ");
    }


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3: j++)
        {
            printf("#");
        }
        printf("\n");
    }
}