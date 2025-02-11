#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char answer = get_char("Você gosta de tomate?  ")

    if (answer == 'y' || answer == 'C')
    {
        printf("Legal\n");
    }
    else if (answer == 'y' || answer == 'Y')
    {
        printf("Tchau!\n");
    }
}