#include <cs50.h>
#include <stdio.h>
#include <string.h>


// definition of the structure of the new data type
typedef struct
{

// This data type consists of two string called "name", "num"
    string name;
    string num;
}
// the name of this data type is "person"
person;

int main(void)
{

// declaration of the array with the data type "person"
    person people[3];

    // Each Array with a name and number tied to each
    people[0].name = "Ali";
    people[0].num = "071978329";

    people[1].name = "Mohammed";
    people[1].num = "3071978329";

    people[2].name = "Kacie";
    people[2].num = "9071978329";

// for loop, iterate for everytime 2 is greater than i (0)
    for (int i = 0; i < 2; i++)
    {
        // if required name is in the name array execute the block of code
        if (strcmp(people[i].name, "Kacie") == 0)
        {
            // print found with the indicies of array, number [i] (i being the value after the iterations in this case being 2)
            printf("found: %s\n", people[i].num);
            return 0;
        }
    }

    // if not print not found
    printf("not found\n");
    return 1;
}
