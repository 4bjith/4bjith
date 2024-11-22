#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Game function.

int game(char you, char computer)
{
    if (you == computer)
    {
        return -1;
    }
    if (you == 's' && computer == 'p')
        return 0;

    else if (you == 'p' && computer == 's')
        return 1;

    if (you == 'p' && computer == 'z')
        return 0;

    else if (you == 'z' && computer == 'p')
        return 1;

    if (you == 'z' && computer == 's')
        return 0;

    else if (you == 's' && computer == 'z')
        return 1;
    return 0;
}
// main function.
int main()
{
    int n;

    char you, computer, result;

    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
    {
        computer = 's';
    }
    else if (n < 33 && n > 66)
    {
        computer = 'p';
    }
    else
    {
        computer = 'z';
    }

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\n\n\t\t\t\t\t\t\t");

    scanf("%c", &you);

    result = game(you, computer);

    if (result == -1)
    {
        printf("\n\n\n\n\t\t\t\t\t\t\t Draw \n\n\n");
    }
    else if (result == 1)
    {
        printf("\n\n\n\n\t\t\t\t\t\t You Wins \n\n\n");
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t Computer Wins \n\n\n");
    }
    printf("\t\t\t\t You Choose : %c And the Computer choose %c \n\n\n", you, computer);
    return 0;
}
