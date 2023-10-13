#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    while (1)  // This will create an infinite loop
    {
        putchar(i);
        i++;
        if (i == 10) {
            break; // Break the loop after printing 0 to 9
        }
    }
    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
