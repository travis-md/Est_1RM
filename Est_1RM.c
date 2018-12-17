// Estimate One Rep Max

#include <cs50.h>
#include <stdio.h>

int one_rm(x, y)
{
    return (x * y * 0.0333) + x;
}

int main(void)
{
    // Prompt user for x
    int x = get_int("weight: ");

    // Prompt user for y
    int y = get_int("reps: ");

    printf("Estimated 1 rep max is: %i\n", one_rm( x, y));
}
