#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //vars
    int height, row, space, column;

    do
    {
        //request height
        height = get_int("Height: ");
    }
// keep repeating if value is not between 1 & 8
    while (height > 8 || height < 1);


// add 1 if height is greater than add 1 row and execute the body of the loop (2 for loop's ~ space & column loops)
    for (row = 0 ; row < height ; row++)
    {

// if space is greater than row decrement the space by 1 each time
    for (space = height - 1 ; space > row ; space--)
        {
            printf(" ");
        }
// if row is greater than  or equal to column increment the brick by 1 each time
    for (column = 0 ; column <= row; column++)
        {
// print brick (#)
            printf("#");
        }
        //add a line each time the original for loop (row) is true
        printf("\n");
    }
}
