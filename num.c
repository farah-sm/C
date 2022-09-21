#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Name and number array
    string names[] = {"Ali", "Chris"};
    string numbers[] = {"+44 739 9011140", "+44 739 7124341"};

// for loop, iterate for everytime 2 is greater than i (0)
    for (int i = 0; i < 2; i++)
    {
        // if required name is in the name array execute the block of code
        if (strcmp(names[i], "Chris") == 0)
        {
            // print found with the indicies of array, number [i] (i being the value after the iterations in this case being 2)
            printf("found: %s\n", numbers[i]);
            return 0;
        }
    }

    // if not print not found
    printf("not found\n");
    return 1;
}
